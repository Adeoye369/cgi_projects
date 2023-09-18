#include <iostream>
#include <ctime>

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "----------NUM GUESSING GAME -----------\n";
    do
    {
        std::cout << "Enter a guess between (1 - 100): ";
        std::cin >> guess;
        tries++;

        // Let check the guessed num
        if (guess > num)
        {
            std::cout << "Too High\n";
        }
        else if (guess < num)
        {
            std::cout << "Too Low \n";
        }
        else
        {
            std::cout << "The Answer is CORRECT, your tries is ==> " << tries << "\n";
        }
    } while (guess != num);

    std::cout << "---------------------------- -----------\n";
}