#!/usr/bin/python3
"""Audio service — plays audio files via system player (aplay/ffplay)."""
import os
import shutil
import subprocess
import time
import threading

import rclpy
from rclpy.node import Node
from lyre_msgs.srv import PlayFile, PlayStop


PLAYFILE_CODE_OK = PlayFile.Response.CODE_OK
PLAYFILE_CODE_INVALID_PARAMS = PlayFile.Response.CODE_INVALID_PARAMS
PLAYFILE_CODE_FAILED = PlayFile.Response.CODE_FAILED


def _pick_player(filepath: str) -> list[str]:
    """Return the command line for playing *filepath*, preferring aplay for
    .wav and falling back to ffplay."""
    ext = os.path.splitext(filepath)[1].lower()
    if ext == '.wav' and shutil.which('aplay'):
        return ['aplay', '-q', filepath]
    if shutil.which('ffplay'):
        return ['ffplay', '-nodisp', '-autoexit', '-loglevel', 'quiet', filepath]
    if shutil.which('aplay'):
        return ['aplay', '-q', filepath]
    raise RuntimeError('No audio player found (tried aplay, ffplay)')


class AudioServiceNode(Node):
    def __init__(self):
        super().__init__('audio_service')

        self._play_srv = self.create_service(
            PlayFile,
            PlayFile.Request.SERVICE_NAME,
            self._handle_play_file,
        )
        self._stop_srv = self.create_service(
            PlayStop,
            PlayStop.Request.SERVICE_NAME,
            self._handle_play_stop,
        )

        self._active_sid: str | None = None
        self._proc: subprocess.Popen | None = None
        self._lock = threading.Lock()

        self.get_logger().info(
            f'AudioService ready — {PlayFile.Request.SERVICE_NAME} / {PlayStop.Request.SERVICE_NAME}'
        )

    # ------------------------------------------------------------------
    def _handle_play_file(self, request: PlayFile.Request, response: PlayFile.Response) -> PlayFile.Response:
        if not os.path.isfile(request.path):
            response.code = PLAYFILE_CODE_INVALID_PARAMS
            response.message = f'File not found: {request.path}'
            self.get_logger().error(response.message)
            return response

        with self._lock:
            if request.force and self._proc is not None:
                self._stop_proc()
                self.get_logger().info(f'Force-stopped {self._active_sid}')

            if self._proc is not None:
                response.code = PLAYFILE_CODE_FAILED
                response.message = 'Another stream is already playing'
                self.get_logger().warn(response.message)
                return response

            sid = request.sid if request.sid else f'play_{int(time.time() * 1000)}'
            self._active_sid = sid

            try:
                cmd = _pick_player(request.path)
                self.get_logger().info(f'Playing: {" ".join(cmd)}')
                self._proc = subprocess.Popen(
                    cmd,
                    stdout=subprocess.DEVNULL,
                    stderr=subprocess.DEVNULL,
                )
                threading.Thread(target=self._reap_proc, args=(sid,), daemon=True).start()

                response.sid = sid
                response.code = PLAYFILE_CODE_OK
                response.message = f'Playing {request.path}'
            except Exception as exc:
                self._active_sid = None
                response.code = PLAYFILE_CODE_FAILED
                response.message = str(exc)
                self.get_logger().error(str(exc))

        return response

    # ------------------------------------------------------------------
    def _handle_play_stop(self, request: PlayStop.Request, response: PlayStop.Response) -> PlayStop.Response:
        with self._lock:
            self._stop_proc()
            self.get_logger().info(f'PlayStop (was: {self._active_sid})')
            self._active_sid = None
        return response

    # ------------------------------------------------------------------
    def _stop_proc(self):
        """Terminate the running player process, if any."""
        if self._proc is None:
            return
        self._proc.terminate()
        try:
            self._proc.wait(timeout=2)
        except subprocess.TimeoutExpired:
            self._proc.kill()
            self._proc.wait()
        self._proc = None

    # ------------------------------------------------------------------
    def _reap_proc(self, sid: str):
        """Wait for the player process to finish, then clean up."""
        if self._proc is None:
            return
        self._proc.wait()
        with self._lock:
            self._proc = None
            if self._active_sid == sid:
                self._active_sid = None
        self.get_logger().info(f'Playback finished: {sid}')


def main(args=None):
    rclpy.init(args=args)
    node = AudioServiceNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        if rclpy.ok():
            node.destroy_node()
            rclpy.shutdown()


if __name__ == '__main__':
    main()
