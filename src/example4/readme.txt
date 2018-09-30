Luckily, there is a way to prevent multiple declarations in header
files: header guards. These can be seen in a.hpp.

They take the form of pragma statements starting with #, which are
commands to the C preprocessor. The pragmas mean if you define the
class a, you also define the variable A_H, and you only define a if
A_H has not already been defined. This is just a long way of saying
you can only define a once, and A_H is a variable that lets you
keep track of whether a has been defined.

The variable A_H follows convention, but the variable you define can
be anything. Try changing A_H to a. What do you expect to happen?

Typing in "g++ -o hello hello.cpp" should now work. However, 
"g++ -o hello hello.cpp a.cpp" should not work. Why? Is it the compiler
or the linker that complains?

The example may compile, but the general rule not to include .cpp
files still holds. Apart from avoiding the other errors that arise
from doing this, including .hpp files instead of .cpp files results
in more efficient compilation. If you include a.cpp in hello.cpp and
change a.cpp, both a.cpp and hello.cpp need to be recompiled. However,
if you include a.hpp instead, only a.cpp needs to be recompiled when
a.cpp is modified. It is better to compile files separately using 
header files and link the object files afterwards rather than compile 
the implementations all at once, which will require large amounts of 
recompilation for changes that should only affect one class.
