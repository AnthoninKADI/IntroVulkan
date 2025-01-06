# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Users/anthonin.kadi/Desktop/WS Vulkan/IntroVulkan/out/build/x64-Debug/_deps/sdl3-src"
  "C:/Users/anthonin.kadi/Desktop/WS Vulkan/IntroVulkan/out/build/x64-Debug/_deps/sdl3-build"
  "C:/Users/anthonin.kadi/Desktop/WS Vulkan/IntroVulkan/out/build/x64-Debug/_deps/sdl3-subbuild/sdl3-populate-prefix"
  "C:/Users/anthonin.kadi/Desktop/WS Vulkan/IntroVulkan/out/build/x64-Debug/_deps/sdl3-subbuild/sdl3-populate-prefix/tmp"
  "C:/Users/anthonin.kadi/Desktop/WS Vulkan/IntroVulkan/out/build/x64-Debug/_deps/sdl3-subbuild/sdl3-populate-prefix/src/sdl3-populate-stamp"
  "C:/Users/anthonin.kadi/Desktop/WS Vulkan/IntroVulkan/out/build/x64-Debug/_deps/sdl3-subbuild/sdl3-populate-prefix/src"
  "C:/Users/anthonin.kadi/Desktop/WS Vulkan/IntroVulkan/out/build/x64-Debug/_deps/sdl3-subbuild/sdl3-populate-prefix/src/sdl3-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/anthonin.kadi/Desktop/WS Vulkan/IntroVulkan/out/build/x64-Debug/_deps/sdl3-subbuild/sdl3-populate-prefix/src/sdl3-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/Users/anthonin.kadi/Desktop/WS Vulkan/IntroVulkan/out/build/x64-Debug/_deps/sdl3-subbuild/sdl3-populate-prefix/src/sdl3-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
