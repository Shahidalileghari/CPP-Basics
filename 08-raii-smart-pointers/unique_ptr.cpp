#include <iostream>
#include <memory>
#include <string>
#include <utility>

struct Document {
    explicit Document(std::string title) : title(std::move(title)) {}
    std::string title;
};

int main() {
    auto document = std::make_unique<Document>("C++ ownership");
    std::cout << document->title << '\n';

    auto transferred = std::move(document);
    std::cout << transferred->title << '\n';
    std::cout << std::boolalpha
              << "Original pointer is empty: " << (document == nullptr) << '\n';
}
