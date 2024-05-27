import arithmetic;
#include <iostream>
#include <assert.h>

int main() {
    assert(add(3, 4) == 7.0);
    assert(add(3.3, 4.5)  == 7.8);
    std::cout << "All tests passed!\n"; // prints "All tests passed!
    return 0;
}
