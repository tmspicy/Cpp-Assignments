#include <iostream>
#include <string>
#include <limits>
using namespace std;

class BankAccount {
private:
    string name;
    string father_name;
    int age;
    string phone_number;
    string address;
    int pin;
    int account_number;
    double balance;

public:
    void createAccount() {
        cout << "\n--- Account Creation ---\n";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        cout << "Enter name: ";
        getline(cin, name);
        
        cout << "Enter father's name: ";
        getline(cin, father_name);
        
        cout << "Enter age: ";
        cin >> age;
        
        cin.ignore();
        cout << "Enter phone number: ";
        getline(cin, phone_number);
        
        cout << "Enter address: ";
        getline(cin, address);
        
        cout << "Enter PIN: ";
        cin >> pin;
        
        cout << "Enter account number: ";
        cin >> account_number;
        
        cout << "Enter initial deposit amount: $";
        cin >> balance;
    }

    bool verifyCredentials(int acc_num, int input_pin) {
        return (acc_num == account_number && input_pin == pin);
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: $" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. Remaining balance: $" << balance << endl;
        }
    }

    void displayBalance() const {
        cout << "Current balance: $" << balance << endl;
    }

    int getAccountNumber() const { return account_number; }
};

int main() {
    BankAccount account;
    bool account_exists = false;
    int choice;

    do {
        cout << "\n*** Bank System Menu ***\n";
        cout << "1. Create Account\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Check Balance\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                if (!account_exists) {
                    account.createAccount();
                    account_exists = true;
                    cout << "Account created successfully!" << endl;
                } else {
                    cout << "Account already exists!" << endl;
                }
                break;

            case 2: {
                if (!account_exists) {
                    cout << "Create an account first!" << endl;
                    break;
                }
                int acc_num, pin;
                double amount;
                cout << "Enter account number: ";
                cin >> acc_num;
                cout << "Enter PIN: ";
                cin >> pin;
                
                if (account.verifyCredentials(acc_num, pin)) {
                    cout << "Enter deposit amount: $";
                    cin >> amount;
                    account.deposit(amount);
                } else {
                    cout << "Invalid credentials!" << endl;
                }
                break;
            }

            case 3: {
                if (!account_exists) {
                    cout << "Create an account first!" << endl;
                    break;
                }
                int acc_num, pin;
                double amount;
                cout << "Enter account number: ";
                cin >> acc_num;
                cout << "Enter PIN: ";
                cin >> pin;
                
                if (account.verifyCredentials(acc_num, pin)) {
                    cout << "Enter withdrawal amount: $";
                    cin >> amount;
                    account.withdraw(amount);
                } else {
                    cout << "Invalid credentials!" << endl;
                }
                break;
            }

            case 4: {
                if (!account_exists) {
                    cout << "Create an account first!" << endl;
                    break;
                }
                int acc_num, pin;
                cout << "Enter account number: ";
                cin >> acc_num;
                cout << "Enter PIN: ";
                cin >> pin;
                
                if (account.verifyCredentials(acc_num, pin)) {
                    account.displayBalance();
                } else {
                    cout << "Invalid credentials!" << endl;
                }
                break;
            }

            case 5:
                cout << "Exiting system. Thank you!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}