#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 2) {
        std::cerr << "Usage: file_stats <path>\n";
        return 2;
    }

    std::ifstream input(argv[1]);
    if (!input) {
        std::cerr << "Could not open file: " << argv[1] << '\n';
        return 1;
    }

    std::size_t lines = 0;
    std::string line;
    while (std::getline(input, line)) {
        ++lines;
    }

    std::cout << "Lines: " << lines << '\n';
}
