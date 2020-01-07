#include <iostream>

int main()
{
    int sum = 0, square = 0;
    for (int i = 1; i < 101; i++) // 101 to remove <=
    {
        square += i;
        sum += i * i;
    }
    std::cout << (square * square - sum) << std::endl;
    std::cin.get();
}

// Output to console: 25164150