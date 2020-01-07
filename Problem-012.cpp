#include <iostream>

static int numDivisor(long long number)
{
    int divCount = 0;
    for (int i = 1; i * i <= number; i++)
        if (number % i == 0)
            divCount++;
    return divCount * 2;
}

int main()
{
    long long numTriangle = 1;
    int count = 2;
    while (numDivisor(numTriangle) <= 500)
    {
        numTriangle += count;
        count++;
    }
    std::cout << numTriangle << std::endl;
}

// Output to console: 76576500
