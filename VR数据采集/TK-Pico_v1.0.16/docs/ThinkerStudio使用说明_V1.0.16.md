# 数据采集工具使用说明

## 1、前置确认
获取到的安装包文件名如 thinker_studio_release_1.0.16.tar.gz ，不同版本的安装包版本号会不一样。

目标机器是一台安装ubuntu22.04的笔记本。将安装包传到目标机器，例如直接放在~目录下。要求目标机器已安装好ros2 humble，本安装包不负责安装ros2 humble。

## 2、解压
cd ~ && tar -zxvf thinker_studio_release_1.0.16.tar.gz
得到一个同名目录。

## 3、安装
注意：先要确保目标机器连接了网络，安装过程中会需要pip安装包。

天工行者进行数据采集会需要天工行者上已安装相机压缩话题组件，install.sh脚本可自动将相机压缩话题组件安装进天工行者，在天工行者开机状态下，用网线将目标机器和天工行者直接连接，再在目标机器上执行install.sh脚本即可（在天工行者上手动安装的步骤参见【附-相机压缩话题组件安装】，研发人员可参考阅读）。

在目标机器上执行以下命令进行安装：
cd ~/thinker_studio_release_1.0.16 && sudo bash install.sh

由于需要apt和pip安装包，所需时间取决于网络的快慢，网速好则十分钟以内可以安装成功。

## 4、运行
服务安装完成后自动启动，后续开机自动启动，可用如下命令查看服务状态：
sudo systemctl status thinker-studio.service

## 5、访问
打开目标机器的浏览器，输入 http://localhost:8888/

## 6、启动遥操

### 6.1 启动前置服务
要启动pico遥操，先启动如下RoboticsServiceProcess服务：

![img](ThinkerStudio图片/image_0.png)

### 6.2 启动遥操服务
再启动如下Teleop Service服务：

![img](ThinkerStudio图片/image_1.png)

启动后显示如下：

![img](ThinkerStudio图片/image_2.png)

### 6.3 启动PICO
然后启动pico，在pico端打开体感追踪器，完成配对和校准（先要绑好双腿和腰部追踪器）

![img](ThinkerStudio图片/image_3.png)
![img](ThinkerStudio图片/image_4.png)
![img](ThinkerStudio图片/image_5.png)
![img](ThinkerStudio图片/image_6.png)
![img](ThinkerStudio图片/image_7.png)
配对和校准完成后佩戴者应该看到上面最后一张图的画面中，左侧人物应该和佩戴者的动作一致。

### 6.4 启动XRoboToolkit
然后在pico端打开XRoboToolkit，完成连接：
![img](ThinkerStudio图片/image_8.png)
![img](ThinkerStudio图片/image_9.png)

连接后在Tracking区域按如下勾选：
![img](ThinkerStudio图片/image_10.png)
注意：勾选Data & Control下的Send框后（上图里还未勾选），pico将发送数据，前面启动的Teleop Service将接收到数据，就会判定连接建立。正确连接后界面上会显示如下：

![img](ThinkerStudio图片/image_11.png)

### 6.5 启动Retargeting Monitor服务

![img](ThinkerStudio图片/image_12.png)

### 6.6 启动天工无疆机器人遥操作
前提是先让天工行者进入上肢控制模式（半身控制模式）：
1. 确保天工行者已经开机（打开天工行者背部左侧的总电源开关，再短按右侧开机键）
2. 遥控器开机（先短按再长按遥控器开关）
3. 在遥控器上按A让机器人自检
4. 自检完成后听到“嘀”的一声后，等待5秒
5. 遥控器F拨杆下拨
6. 遥控器长按A，听到“嘀”的一声
7. 遥控器E拨杆上拨


点击遥操作区域的<开始>按钮，即可启动pico遥操天工行者无疆。注意：点击<开始>按钮后机器人的手臂即会跟随遥操人员的手臂动作，注意四周空间足够，注意安全！！

![img](ThinkerStudio图片/image_13.png)

启动成功后如下：
![img](ThinkerStudio图片/image_14.png)

## 7、动作录制

### 7.1 启动录制
在遥操模式下，（没有启动数据采集的前提下）可点击动作录制区域的<开始>按钮即可开始进行动作录制，如下：

![img](ThinkerStudio图片/image_15.png)

动作录制启动成功后如下：

![img](ThinkerStudio图片/image_16.png)

再次强调，注意pico的XRoboToolkit软件界面上有一个Tracking区域，有一个Data & Control部分下有一个Send勾选框：

![img](ThinkerStudio图片/image_17.png)

作用是控制pico是否发送控制数据的，取消勾选即不发送，也就不会控制机器人随着pico遥操者的手臂运动。

### 7.2 结束录制
点击动作录制区域的<结束>按钮即可完成录制，成功后，刚刚录制的动作会出现在右侧录制历史区域：

![img](ThinkerStudio图片/image_18.jpeg)

## 8、数据采集

### 8.1 启动头部相机
在开始数据采集之前，先要在天工的192.168.41.2的orin板上启动头部相机服务，否则数据采集将会失败（采集就是为了采集相机数据和手臂关节角度，相机服务不启动则根本采集不到数据）。

先ssh连接到192.168.41.2：
ssh nvidia@192.168.41.2
密码nvidia

启动头部相机服务：
sudo systemctl start orbbec_head.service

确保有相机数据压缩话题且该话题有数据：
ros2 topic echo /ob_camera_head/color/image_raw/compressed --no-arr

![img](ThinkerStudio图片/image_19.png)

### 8.2 开始数据采集
注意：只有在没有录制动作的时候，才可以通过点击数据采集区域的<开始>按钮开始数据采集。

![img](ThinkerStudio图片/image_20.png)

数据采集开始成功后会显示如下：

![img](ThinkerStudio图片/image_21.jpeg)

### 8.3 结束数据采集
点击数据采集区域的<结束>按钮后，将会停止采集数据，刚才采集的数据会出现在右侧的采集历史区域：

![img](ThinkerStudio图片/image_22.jpeg)

## 9、结束遥操
停止所有服务

点击遥操作区域的<结束>按钮，并停止相关的其他服务：

![img](ThinkerStudio图片/image_23.png)



## 10、数据质检和导出（转换成其他格式）

### 10.1 数据质检
对刚刚采集的数据这里进行质检等后续操作

![img](ThinkerStudio图片/image_24.jpeg)

点击<质检>按钮会进入数据质检页面：
![img](ThinkerStudio图片/image_25.jpeg)

可以添加多个区域帧，并添加描述，完成后可点击提交：

![img](ThinkerStudio图片/image_26.jpeg)

### 10.2 数据导出
对于已经质检过的数据，会出现<导出>按钮。
![img](ThinkerStudio图片/image_27.png)

点击后可选择要导出的格式（数据越大，导出所需要的时间越长）：
![img](ThinkerStudio图片/image_28.png)

导出成功后，刷新页面，点击就可复制导出数据的目录：
![img](ThinkerStudio图片/image_29.png)

## 11、动作播放
录制的动作也可以进行播放，注意机器人周围要有较大空间，以免碰撞损坏机器人：

![img](ThinkerStudio图片/image_30.png)

## 12、安装包卸载

安装包内有卸载脚本，直接执行即可完成卸载。
cd ~/thinker_studio_release_1.0.16 && sudo bash uninstall.sh

### 附-相机压缩话题组件安装

在将目标机器和天工行者已用网线直连的情况下，安装脚本已会自动处理，这里供研发人员参考阅读

由于采集数据会记录头部摄像头视频数据，所以初次配置环境时操作安装压缩话题（只需要操作一次）：

先在orin上启动相机话题
~~~
Plain Text
######### 新终端
ssh nvidia@192.168.41.2
#输入密码： nvidia 
sudo systemctl start orbbec_head.service
~~~

查看是否有相机压缩话题 /ob_camera_head/color/image_raw/compressed ，若有，则无需操作，若无，需要在Orin上安装如下的相机图像压缩相关程序：
![img](ThinkerStudio图片/image_31.png)

下载上述两个文件到本机（笔记本电脑）的 /home/ubuntu/Downloads 目录下:
~~~
Bash
ssh nvidia@192.168.41.2
nvidia#输入密码
#安装image-transport库
export ROS_DISIRO=humble
### 整体复制下面两行，一起运行
sudo apt install libgflags-dev nlohmann-json3-dev \
ros-$ROS_DISIRO-image-transport ros-$ROS_DISIRO-image-transport-plugins ros-$ROS_DISIRO-compressed-image-transport ros-$ROS_DISIRO-image-publisher ros-$ROS_DISIRO-camera-info-manager
    
###### 新终端（笔记本本机下）
scp /home/ubuntu/Downloads/rvl_codec.hpp nvidia@192.168.41.2:/home/nvidia
nvidia #输入密码
scp /home/ubuntu/Downloads/libcompressed_depth_image_transport.so nvidia@192.168.41.2:/home/nvidia
nvidia #输入密码

#### 新终端
ssh nvidia@192.168.41.2
nvidia #输入密码
sudo cp /home/nvidia/rvl_codec.hpp /opt/ros/humble/include/compressed_depth_image_transport/
sudo cp /home/nvidia/libcompressed_depth_image_transport.so /opt/ros/humble/lib
~~~

安装成功后直接断电重启机器人，再到Orin板用 sudo systemctl start orbbec_head.service 命令启动头部相机服务，验证是否有 /ob_camera_head/color/image_raw/compressed 话题以及该话题是否有数据。

