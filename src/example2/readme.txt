This example shows what a linker error is. During compilation, the 
linker links together C++ object files to produce an executable. The
linker cares about how something is implemented, so it needs
to know where all the .cpp files are. 

Suppose we want to use the class "a" in Hello.cpp. When we compile 
hello.cpp, we need to give it a.cpp as well

Type "g++ -o hello hello.cpp" as before. It should give an error along the
lines of "undefind reference to a::print()". The linker is complaining
because it can't find where a::print() is implemented. Just knowing that
a::print() exists from a.hpp is not enough.

Type "g++ -o hello hello.cpp a.cpp". This should work.
