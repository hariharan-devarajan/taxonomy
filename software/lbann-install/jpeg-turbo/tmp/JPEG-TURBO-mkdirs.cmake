# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/build"
  "/usr/workspace/haridev/iopp/software/lbann-install/install_deps/jpeg-turbo"
  "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/tmp"
  "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp"
  "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/src"
  "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/usr/workspace/haridev/iopp/software/lbann-install/jpeg-turbo/stamp/${subDir}")
endforeach()
