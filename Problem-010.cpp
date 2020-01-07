#include <iostream>
#include <vector>

int main() {
	bool isPrime = true;
	long long sum = 0;
	std::vector<int> pNums;
	pNums.push_back(2);
	
	for (int num = 3; num < 2000000; num++) {
		for (int idx = 0; isPrime == true && idx < pNums.size() && pNums[idx] * pNums[idx] <= num; idx++)
			if (num % pNums[idx] == 0)
				isPrime = false;
		if (isPrime)
			pNums.push_back(num);
		isPrime = true;
	}
	
	for (int index = 0; index < pNums.size(); index++)
		sum += pNums[index];
	std::cout << sum << std::endl;
}

// Output to console: 142913828922
