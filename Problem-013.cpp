#include <iostream>
#include <algorithm>
#include <fstream>

static void addStrings(std::string num1, std::string& num2)
{
    std::reverse(num1.begin(), num1.end()); // Reverse: smallest base to largest base
    std::reverse(num2.begin(), num2.end());
    unsigned int carry = 0, sum = 0; // Necessary temporary variables
    std::string total;
    for (unsigned int i = 0; i < num1.size(); i++) // add the two strings up to length of num1 (assuming size of num1 < num2)
    {
        sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        total.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    for (unsigned int j = num1.size(); j < num2.size(); j++) // add the rest of the numbers up to size of num2
    {
        sum = (num2[j] - '0') + carry;
        total.push_back(sum % 10 + '0');
        carry = sum / 10;
    }
    if (carry) // check if there is a final carry over number
        total.push_back(carry + '0');
    std::reverse(total.begin(), total.end()); // reverse the resulting sum
    num2 = total;
}
int main()
{
    std::ifstream inFile("for-problem-013.txt");
    if (!inFile)
        return 1;
    std::string tempStr = "", sum = "";
    inFile >> sum;
    for (unsigned int index = 1; index < 100; index++)
    {
        inFile >> tempStr;
        addStrings(tempStr, sum);
    }
    inFile.close(); // close the txt file
    for (unsigned int idx = 0; idx < 10; idx++) // output first ten digit of sum
        std::cout << sum[idx];
}

// Output to console: 5537376230