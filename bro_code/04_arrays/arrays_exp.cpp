
#include <iostream>

int main()
{

    std::string cars[] = {"Carvote", "Mustang", "Camery"};
    double prices[3];

    prices[0] = 12000.00;
    prices[1] = 67000.50;
    prices[2] = 24000.00;

    for (size_t i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        std::cout << "Car - " << cars[i] << ", Price = " << prices[i] << "\n";
    }
}