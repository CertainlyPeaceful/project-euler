#include <iostream>
#include <fstream>

long long Product(int const series[], int currIndex)
{
    long long total = 1; // x * 0 = 0
    for (int idx = currIndex; idx < currIndex + 13; idx++)
        total *= series[idx];
    return total;
}
void copyValue(int const from[], int to[], int currIndex)
{
    int count = 0;
    for (int idx = currIndex; idx < currIndex + 13; idx++)
    {
        to[count] = from[idx];
        count++;
    }
}
int main()
{
    // Preparation
    std::ifstream fin("for-problem-008.txt");
    if (!fin)
        return 1;
    std::string series = " ";
    fin >> series;
    int numbers[series.length()] = {0};
    int highest[13] = {0};
    for (int idx = 0; idx < series.length(); idx++)
        numbers[idx] = series[idx] - '0';
    // Evaluation
    for (int index = 0; index < 987; index++) // 1000 - 13 = 987
    {
        if (Product(numbers, index) > Product(highest, 0))
            copyValue(numbers, highest, index);
    }
    // Output
    std::cout << Product(highest, 0);
}

// Output to console: 23514624000