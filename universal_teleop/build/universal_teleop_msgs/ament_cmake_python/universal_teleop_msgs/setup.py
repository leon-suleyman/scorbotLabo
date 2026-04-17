from setuptools import find_packages
from setuptools import setup

setup(
    name='universal_teleop_msgs',
    version='2.0.0',
    packages=find_packages(
        include=('universal_teleop_msgs', 'universal_teleop_msgs.*')),
)
