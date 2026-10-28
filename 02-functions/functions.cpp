#include <iostream>
#include <string>

[[nodiscard]] int square(int value) {
    return value * value;
}

void print_message(const std::string& message) {
    std::cout << message << '\n';
}

int main() {
    print_message("Functions make code reusable.");
    std::cout << "Square of 7: " << square(7) << '\n';
}
