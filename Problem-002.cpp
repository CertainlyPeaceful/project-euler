#include <iostream>

int main()
{
    int previous = 1, current = 2, sum = 0, temporary = 0;
    while (current <= 4000000)
    {
        if (current % 2 == 0)
            sum += current;
        temporary = current;
        current += previous;
        previous = temporary;
    }
    std::cout << sum << '\n';
}

// output to console: 4613732