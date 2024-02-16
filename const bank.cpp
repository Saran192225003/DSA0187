#include<iostream>

class BankAccount {
public:
    BankAccount() {
        balance = 0.0;
        std::cout << "Bank Account Created\n";
    }
    ~BankAccount() {
        std::cout << "Bank Account Destroyed\n";
    }
    void displayBalance() {
        std::cout << "Balance: $" << balance << "\n";
    }
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit: $" << amount << "\n";
        displayBalance();
    }
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawal: $" << amount << "\n";
        } else {
            std::cout << "Insufficient funds\n";
        }
        displayBalance();
    }

private:
    double balance;
};

int main() {
    BankAccount myAccount;
    myAccount.deposit(1000.0);
    myAccount.withdraw(500.0);

    return 0;
}

