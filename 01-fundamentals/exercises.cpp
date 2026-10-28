#include <iostream>

int main() {
    long long first{};
    long long second{};

    std::cout << "Enter two integers: ";
    if (!(std::cin >> first >> second)) {
        std::cerr << "Invalid input. Please enter two integers.\n";
        return 1;
    }

    std::cout << "Sum: " << first + second << '\n';
    std::cout << "Difference: " << first - second << '\n';
    std::cout << "Product: " << first * second << '\n';

    if (second == 0) {
        std::cout << "Quotient: undefined (division by zero)\n";
    } else {
        std::cout << "Quotient: "
                  << static_cast<double>(first) / static_cast<double>(second)
                  << '\n';
    }
}
