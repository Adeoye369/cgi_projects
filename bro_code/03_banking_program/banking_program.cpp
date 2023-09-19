#include <iostream>

using std::cin;
using std::cout;

// A simple banking app demo
void showBalance(double);
double withdraw(double);
double deposit(double);

int main()
{
    // Display account detail;
    double balance = 0.0;
    double amount = 0.0;
    int user_input;
    do
    {
        cout << "====    Banking App    ====\n";
        cout << "PRESS: \n";
        cout << "1. Check Balance\n";
        cout << "2. To Deposit\n";
        cout << "3. To Withdraw\n";
        cout << "4. To Quit\n";

        cout << " \n==> Enter your option: ";
        cin >> user_input;

        switch (user_input)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            cout << "Enter your deposit Amount: ";
            cin >> amount;
            balance += deposit(amount);
            break;
        case 3:
            cout << "Enter your withdrawal Amount:";
            cin >> amount;
            balance -= withdraw(amount);
            break;
        case 4:
            cout << "Thanks for Visiting! Good bye!\n";
            break;

        default:
            cout << "Invalid input,⚠ try again!\n";
        }
    } while (user_input != 4);
}

void showBalance(double balance)
{
    cout << "Your balance is : " << balance << "\n";
}

double withdraw(double amount)
{
    return 0.0;
}

double deposit(double amount)
{
    return 0.0;
}