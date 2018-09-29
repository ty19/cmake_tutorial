A Hello World example to make sure you can compile things.

Run "g++ -o hello hello.cpp" 

g++ is the compiler. Install it if you need to.
The -o argument sets the name of the output executable to hello

To run hello from the compilation directory, type "./hello". 

./ means a file in the current directory
.. is the directory above

hello.hpp is a header file. Header files define what a class has and
what it can do without specifying how it does it, i.e. it defines a class
but not its implementation. In this basic example hello.hpp since we aren't
defining a class.

hello.cpp is the implementation of hello.hpp. It implements things that are
defined in hello.hpp. In this case there is nothing to define, so it just
has main(). 
