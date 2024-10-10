# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if(EXISTS "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp/JPEG-TURBO-gitclone-lastrun.txt" AND EXISTS "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp/JPEG-TURBO-gitinfo.txt" AND
  "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp/JPEG-TURBO-gitclone-lastrun.txt" IS_NEWER_THAN "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp/JPEG-TURBO-gitinfo.txt")
  message(STATUS
    "Avoiding repeated git clone, stamp file is up to date: "
    "'/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp/JPEG-TURBO-gitclone-lastrun.txt'"
  )
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/src"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/src'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/tcetmp/bin/git" 
            clone --no-checkout --depth 1 --no-single-branch --config "advice.detachedHead=false" "https://github.com/libjpeg-turbo/libjpeg-turbo" "src"
    WORKING_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo"
    RESULT_VARIABLE error_code
  )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once: ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/libjpeg-turbo/libjpeg-turbo'")
endif()

execute_process(
  COMMAND "/usr/tcetmp/bin/git" 
          checkout "2.0.3" --
  WORKING_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/src"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: '2.0.3'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/tcetmp/bin/git" 
            submodule update --recursive --init 
    WORKING_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/src"
    RESULT_VARIABLE error_code
  )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/src'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp/JPEG-TURBO-gitinfo.txt" "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp/JPEG-TURBO-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp/JPEG-TURBO-gitclone-lastrun.txt'")
endif()
