#include <iostream>

void inArray(int num, int array[]) {
    for (int i = 5; i > -1; i--) {
        array[i] = num % 10;
        num /= 10;
    }
}
bool isPalindrome(int array[]) {
    if (array[0] == array[5] && array[1] == array[4] && array[2] == array[3])
        return 1;
    return 0;
}

int main()
{
    int palin = 0;
    int digits[6] = { 0 };

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            inArray(i * j, digits);
            if (isPalindrome(digits) && (i * j) > palin)
                palin = i * j;
        }
    }
    std::cout << palin << '\n';
    std::cin.get();
}