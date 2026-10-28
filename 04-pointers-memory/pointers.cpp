#include <iostream>

int main() {
    int value = 42;
    int* pointer = &value;

    std::cout << "Value: " << value << '\n';
    std::cout << "Address stored by pointer: " << pointer << '\n';
    std::cout << "Value through pointer: " << *pointer << '\n';

    *pointer = 99;
    std::cout << "Updated value: " << value << '\n';
}
