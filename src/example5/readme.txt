Now the real fun begins. We've seen some of the issues with the
compiler and linker when building C++ executables. Even if you 
do everything right, compiling files by hand is still a ton of 
typing. Wouldn't it be nice if there was a way to specify once
and for all which files have which dependencies, and have it done
automatically?

cmake does exactly that. Without getting too much into details, it
is a build system, i.e. a system to build large projects. One of the
main benefits of build systems is they only re-build files that have
been directly modified or have modified dependencies, which can really
reduce compilation times.

The CMakeLists.txt file is a minimal cmake example for building our
simple project. More advanced features include variables, subdirectories,
and external libraries. 

To use cmake:

"mkdir build" to create a new subdirectory build
"cd build" to move into the directory you just made
"cmake .." to run cmake on the parent directory
"make" to run the generated Makefile

The hello executable should now be in the build directory.

cmake generates Makefiles, which are another build system. 
"make" calls the generated Makefile to build what was specified
in the cmake file.

The build directory is not necessary, but it separates your object
files from your source files, which greatly reduces clutter.

The name of the build directory does not have to be build. However,
CMakeLists.txt must be called CMakeLists.txt!
