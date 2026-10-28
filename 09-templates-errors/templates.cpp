#include <concepts>
#include <iostream>

template <std::totally_ordered T>
T minimum(T left, T right) {
    return right < left ? right : left;
}

int main() {
    std::cout << minimum(7, 3) << '\n';
    std::cout << minimum(2.5, 9.1) << '\n';
}
