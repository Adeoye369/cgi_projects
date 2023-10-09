
#include <iostream>
#include <iomanip>
#include <stdio.h>
#include "Account.h"

using std::cin;
using std::cout;

void showBalance(double balance)
{
    cout << "Your balance is : $" << std::setprecision(2) << std::fixed << balance << "\n\n";

    char input;
    do
    {
        cout << "\n Do you want to continue (Y/N):";
        cin >> input;
        if (input == 'Y')
            return;
        if (input == 'N')
        {
            cout << "Thanks for Visiting! Good bye!\n";
            exit(EXIT_SUCCESS);
        }

    } while (input != 'Y' || input != 'N');
}

double withdraw(double amount)
{
    cout << "You are withdrawing a certain amount of: $" << std::setprecision(3) << std::fixed << amount << "\n";
    return amount;
}

double deposit(double amount)
{
    cout << "You are depositing a certain amount of: $" << std::setprecision(3) << std::fixed << amount << "\n";
    return amount;
}