#include <iostream>
#include <ctime>

int main()
{
    srand(time(0));

    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:
        std::cout << "You win a bag\n";
        break;
    case 2:
        std::cout << "You win a Mog\n";
        break;
    case 3:
        std::cout << "You win a Ticket to Hawaii\n";
        break;
    case 4:
        std::cout << "You win a Hospital bill\n";
        break;

    case 5:
        std::cout << "You win a Nothing\n";
        break;
    }
}