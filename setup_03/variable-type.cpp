#include <iostream>
#include <src/some.hpp>
int main()
{
    std::string food1 = "Offada Rice";
    float food1Price = 320.0;
    int food1Plates = 4;
    char food1CodeID = 'O';

    std::cout << food1 << "-"
              << "Price : " << food1Price;
    return 0;
}