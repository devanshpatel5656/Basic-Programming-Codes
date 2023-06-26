#include <iostream>
using namespace std;
class BankAccount {
private:
    int accountNumber;
    float balance;
public:
    BankAccount(int accNum, float initialBalance) {
        accountNumber = accNum;
        balance = initialBalance;
    }
    void displayAccountDetails() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }
    void deposit(float amount) {
        balance += amount;
        cout << "Deposit successful. Updated balance: $" << balance << endl;
    }
    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient balance. Withdrawal canceled." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. Updated balance: $" << balance << endl;
        }
    }
};
int main() {
    int accountNumber;
    float initialBalance, depositAmount, withdrawAmount;
    cout << "Enter the account number: ";
    cin >> accountNumber;
    cout << "Enter the initial balance: $";
    cin >> initialBalance;
    BankAccount account(accountNumber, initialBalance);
    account.displayAccountDetails();
    cout << "Enter the amount to deposit: $";
    cin >> depositAmount;
    account.deposit(depositAmount);
    cout << "Enter the amount to withdraw: $";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);
    return 0;
}
