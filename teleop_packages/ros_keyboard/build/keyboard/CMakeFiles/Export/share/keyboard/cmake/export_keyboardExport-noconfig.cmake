#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "keyboard::keyboard" for configuration ""
set_property(TARGET keyboard::keyboard APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(keyboard::keyboard PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/keyboard/keyboard"
  )

list(APPEND _IMPORT_CHECK_TARGETS keyboard::keyboard )
list(APPEND _IMPORT_CHECK_FILES_FOR_keyboard::keyboard "${_IMPORT_PREFIX}/bin/keyboard/keyboard" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
