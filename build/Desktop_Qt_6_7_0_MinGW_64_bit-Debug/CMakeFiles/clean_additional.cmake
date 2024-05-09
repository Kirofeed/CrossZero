# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TikTakToe_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TikTakToe_autogen.dir\\ParseCache.txt"
  "TikTakToe_autogen"
  )
endif()
