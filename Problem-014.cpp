#include <iostream>
#define uint unsigned int

static int getTerm(uint number, uint termCount)
{
    if (number == 1)
        return termCount+1;
    else if (number % 2 == 0)
        getTerm(number/2, termCount+1);
    else
        getTerm(3*number+1, termCount+1);
}
int main()
{
    uint count = 0, highCount = 0, highNum = 0;
    for (uint num = 3; num < 1000000; num += 2)
    {
        count = getTerm(num, count);
        if (count > highCount)
        {
            highCount = count;
            highNum = num;
        }
        count = 0;
    }
    std::cout << highNum << std::endl;
}

// Output to console: 837799