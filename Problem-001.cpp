#include <iostream>

int main()
{
    int sum = 0;
    for (int number = 1; number < 1000; number++)
    {
        if (number % 3 == 0 || number % 5 == 0)
            sum += number;
    }
    std::cout << sum << '\n';
    std::cin.get();
}

// output to console: 233168