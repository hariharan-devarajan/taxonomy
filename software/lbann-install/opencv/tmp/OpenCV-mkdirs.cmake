# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/workspace/haridev/iopp/software/lbann-install/opencv/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/opencv/build"
  "/usr/workspace/haridev/iopp/software/lbann-install/install_deps/opencv"
  "/usr/workspace/haridev/iopp/software/lbann-install/opencv/tmp"
  "/usr/workspace/haridev/iopp/software/lbann-install/opencv/stamp"
  "/usr/workspace/haridev/iopp/software/lbann-install/opencv/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/opencv/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/opencv/stamp/${subDir}")
endforeach()
