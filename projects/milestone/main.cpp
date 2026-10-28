#include <iostream>
#include <numeric>
#include <vector>

int main() {
    const std::vector<int> scores{82, 91, 74, 88, 95};
    const int total = std::accumulate(scores.begin(), scores.end(), 0);
    const double average = static_cast<double>(total) / scores.size();

    std::cout << "C++ Mastery milestone\n";
    std::cout << "Number of scores: " << scores.size() << '\n';
    std::cout << "Average score: " << average << '\n';
}
