#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "Account.h"

using std::cin;
using std::cout;

int main()
{
    // Display account detail;
    double balance = 2455.5;
    double amount = 0.0;
    int user_input;
    do
    {
        cout << "====    Banking App    ====\n";
        cout << "Welcome to Our Banking App \n";
        cout << "Your balance is $" << std::setprecision(2) << std::fixed << balance << "\n";
        cout << "PRESS: \n";
        cout << "1. Check Balance\n";
        cout << "2. To Deposit\n";
        cout << "3. To Withdraw\n";
        cout << "4. To Quit\n";

        cout << " \n==> Enter your option: ";
        cin >> user_input;
        cin.clear(); // Restore our input buffer
        fflush(stdin);

        switch (user_input)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            cout << "Enter your deposit Amount: ";
            cin >> amount;

            // Check if amount is positive value
            if (amount > 0)
            {
                balance += deposit(amount);
                showBalance(balance);
            }
            else
            {
                cout << "Amount is not valid\n";
            }

            break;

        case 3:
            cout << "Enter your withdrawal Amount:";
            cin >> amount;
            // check if amount is positive
            if (amount > 0)
            {
                if (amount > balance)
                {
                    cout << "Insufficient balance \n";
                    showBalance(balance);
                    break;
                }
                balance -= withdraw(amount);
                showBalance(balance);
            }
            else
            {
                cout << "Amount is not valid\n";
            }
            break;

        case 4:
            cout << "Thanks for Visiting! Good bye!\n";
            cout << "===============================\n\n";
            break;

        default:
            cout << "Invalid input,⚠ try again!\n";
        }
    } while (user_input != 4);
}
