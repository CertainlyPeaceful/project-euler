#include <iostream>

/*
    Binomial coefficients and Pascal's triangle from grade 12!
    C(40, 20) or "40 choose 20"
    40!/(20!(40-20)!) = (40*39*...*21)/20!
*/

int main()
{
    unsigned long long pathCount = 1;
    const int step = 40; // always 40 steps total
    for (double i = 0; i < 20; i++)
    {
        pathCount *= step - i; // for (40*39*...*21)
        pathCount /= i + 1; // for 20!
    }
    std::cout << std::fixed << pathCount << std::endl;
}