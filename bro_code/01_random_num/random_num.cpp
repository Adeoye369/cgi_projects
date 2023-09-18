#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));

    int num = (rand() % 100) + 1;
    int num1 = (rand() % 100) + 1;
    int num2 = (rand() % 100) + 1;
    std::cout << num << "\n";
    std::cout << num1 << "\n";
    std::cout << num2 << "\n";
}