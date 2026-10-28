#include <iomanip>
#include <iostream>
#include <stdexcept>

class BankAccount {
public:
    explicit BankAccount(double opening_balance = 0.0)
        : balance_(opening_balance) {
        if (opening_balance < 0.0) {
            throw std::invalid_argument("Opening balance cannot be negative.");
        }
    }

    void deposit(double amount) {
        if (amount <= 0.0) {
            throw std::invalid_argument("Deposit must be positive.");
        }
        balance_ += amount;
    }

    void withdraw(double amount) {
        if (amount <= 0.0 || amount > balance_) {
            throw std::invalid_argument("Invalid withdrawal amount.");
        }
        balance_ -= amount;
    }

    [[nodiscard]] double balance() const noexcept {
        return balance_;
    }

private:
    double balance_;
};

int main() {
    try {
        BankAccount account{100.0};
        account.deposit(25.0);
        account.withdraw(40.0);
        std::cout << std::fixed << std::setprecision(2)
                  << "Balance: " << account.balance() << '\n';
    } catch (const std::exception& error) {
        std::cerr << "Account operation failed: " << error.what() << '\n';
        return 1;
    }
}
