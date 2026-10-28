#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> values{8, 3, 5, 3, 9};
    std::sort(values.begin(), values.end());

    std::cout << "Sorted values:";
    for (const int value : values) {
        std::cout << ' ' << value;
    }
    std::cout << '\n';
}
