#include <iostream>

// check % 11 to 20
// if num % 20 == 0
// it follows that num % 10 == 0 and such

bool divisible(int num) {
    for (int i = 11; i <= 20; i++)
        if (num % i != 0)
            return false;
    return true;
}

int main() {
    int value = 20;
    while(!divisible(value)) {
        value++;
    }
    std::cout << value << '\n';
    std::cin.get();
}

// Output to console: 232792560