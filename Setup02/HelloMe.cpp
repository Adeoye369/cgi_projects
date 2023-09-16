#include <iostream>
// using namespace std;

int main()
{
    std::cout << "Hello to you too" << std::endl;
    std::cout << "I do not care about you" << std::endl;
    std::string food1 = "Bread";
    std::string foodList[3] = {"Amala", "Rice", "Spagetti"};
    for (int i = 0; i < sizeof(foodList); i++)
    {
        std::cout << foodList[i] << std::endl;
    }

    return 0;
}