#include <iostream>
#include "Test.h"
#include "sub/Foo.h"

int main() {
    Test test(2137);
    std::cout << "Hello test " << test.GetVal() << "!" << std::endl;
    Foo();
    return 0;
}
