from setuptools import find_packages
from setuptools import setup

setup(
    name='keyboard_msgs',
    version='2.0.0',
    packages=find_packages(
        include=('keyboard_msgs', 'keyboard_msgs.*')),
)
