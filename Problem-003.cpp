#include <iostream>

int main()
{
    long long num = 600851475143, prime = 0;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            num /= i;
            if (prime < i)
                prime = i;
            i = 2; // "reset" the for loop
        }
    }
    if (num > prime) // num is now the "leftover"
        prime = num;
    std::cout << num << '\n';
}

// Output to console: 6857