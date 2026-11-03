#include <iostream>
using namespace std;

int main()
{
    int choice;
    double balance = 0, amount;
    bool running = true;

    while (running) {
        cout << "\n1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter a number: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Balance: " << balance << "$\n";
                break;
            case 2:
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "The amount has been deposited.\n";
                } else {
                    cout << "Invalid amount.\n";
                }
                break;
            case 3:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid amount.\n";
                } else if (amount > balance) {
                    cout << "Insufficient balance.\n";
                } else {
                    balance -= amount;
                    cout << "Withdrawal successful.\n";
                }
                break;
            case 4:
                running = false;
                cout << "Goodbye\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}
