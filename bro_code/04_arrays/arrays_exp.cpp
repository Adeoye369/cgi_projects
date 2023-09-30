
#include <iostream>

double calDiscount(double coupon, double samplePrice);

int main()
{
    double coupon = 0.15;
    double samplePrice = 20000;
    // std::string cars[] = {"Carvote", "Mustang", "Camery"};
    // double prices[3];

    // prices[0] = 12000.00;
    // prices[1] = 67000.50;
    // prices[2] = 24000.00;

    // for (size_t i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    // {
    // std::cout << "Car - " << cars[i] << ", Price = " << prices[i] << "\n";
    // }

    // std::string name = "Mr. Man";
    // double gpa = 2.5;
    // int scores[] = {34, 5556, 4333, 5444, 0, 7644};

    // std::cout << "Scores size " << sizeof(scores) << " bytes \n";
    // std::cout << sizeof(int) << " bytes \n";
    // std::cout << "There are " << sizeof(scores) / sizeof(scores[0]) << " elements \n";
    std::cout << &samplePrice << "\n";
    samplePrice = calDiscount(coupon, samplePrice);

    std::cout << "New Sample Price: " << samplePrice << '\n';
}

double calDiscount(double coupon, double samPrice)
{
    std::cout << &samPrice << " " << samPrice << "\n";
    double reducution = coupon * samPrice;
    samPrice -= reducution;
    return samPrice;
}