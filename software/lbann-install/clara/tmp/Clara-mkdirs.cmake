# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/workspace/haridev/iopp/software/lbann-install/clara/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/clara/src/Clara-build"
  "/usr/workspace/haridev/iopp/software/lbann-install/install_deps/clara"
  "/usr/workspace/haridev/iopp/software/lbann-install/clara/tmp"
  "/usr/workspace/haridev/iopp/software/lbann-install/clara/stamp"
  "/usr/workspace/haridev/iopp/software/lbann-install/clara/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/clara/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/clara/stamp/${subDir}")
endforeach()
