from glob import glob
from setuptools import find_packages, setup


package_name = 'tienkung_action'


setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/config', glob('config/*.json')),
        ('share/' + package_name + '/config/actions', glob('config/actions/*.json')),
        ('share/' + package_name + '/data/traffic_voice', glob('data/traffic_voice/*.mp3')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='soom',
    maintainer_email='soom@local',
    description='tienkung_action trigger player node for audio and waist actions.',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'trigger_player = tienkung_action.trigger_player:main',
        ],
    },
)