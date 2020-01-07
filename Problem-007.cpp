#include <iostream>

bool isPrime(int const value)
{
    for (int i = 2; i < value; i++)
        if (value % i == 0)
            return false;
    return true;
}
int main()
{
    int number = 1, primeNumber = 0, count = 0;
    while (count <= 10001)
    {
        if (isPrime(number))
        {
            count++;
            primeNumber = number;
        }
        number++;
    }
    std::cout << primeNumber << std::endl;
    std::cin.get();
}

// Output to console: 104743