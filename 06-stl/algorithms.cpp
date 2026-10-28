#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

int main() {
    const std::vector<int> values{2, 4, 6, 8};
    const int total = std::accumulate(values.begin(), values.end(), 0);
    const auto first_large = std::find_if(
        values.begin(), values.end(), [](int value) { return value > 5; });

    std::cout << "Total: " << total << '\n';
    if (first_large != values.end()) {
        std::cout << "First value greater than 5: " << *first_large << '\n';
    }
}
