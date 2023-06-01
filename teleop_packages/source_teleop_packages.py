
dir = 'teleop_packages/'
source_target = '/devel/setup.bash'

source_joy = 'source ' + dir + 'ros_joy' + source_target
source_keyboard = 'source ' + dir + 'ros_keyboard' + source_target
source_universal = 'source ' + dir + 'universal_teleop' + source_target

source_command = source_joy + ' && ' + source_keyboard + ' && ' + source_universal
print(source_command)