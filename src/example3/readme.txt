Now you may ask: If we need a.cpp, why don't we just include it?
This can be done by adding #include "a.cpp" in hello.cpp.

Try running "g++ -o hello hello.cpp". Since a.cpp is now included 
in hello.cpp, everything should work, right? Nope, redefinition
error! a.hpp is now included in both hello.cpp and a.cpp, and since
hello.cpp includes a.cpp, there are two definitions of a in a.hpp. 

Note: You can actually make this example work by not including
a.hpp in hello.cpp. But this isn't practical (or possible) for
large projects.  
