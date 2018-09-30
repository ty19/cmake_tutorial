#include <iostream>
#include "hello.hpp"
#include "a.hpp"
#include "a.cpp"

int main() {
    a aTest; // Calls default constructor
    aTest.print();
    return 0;
}
