#include <cassert>
#include <numeric>
#include <vector>

int main() {
    const std::vector<int> scores{10, 20, 30};
    assert(scores.size() == 3);
    assert(std::accumulate(scores.begin(), scores.end(), 0) == 60);
}
