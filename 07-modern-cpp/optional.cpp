#include <iostream>
#include <optional>
#include <string>
#include <unordered_map>

std::optional<std::string> find_user(
    const std::unordered_map<int, std::string>& users, int id) {
    const auto found = users.find(id);
    if (found == users.end()) {
        return std::nullopt;
    }
    return found->second;
}

int main() {
    const std::unordered_map<int, std::string> users{
        {1, "Amina"}, {2, "Bilal"}};

    if (const auto user = find_user(users, 2)) {
        std::cout << *user << '\n';
    } else {
        std::cout << "User not found\n";
    }
}
