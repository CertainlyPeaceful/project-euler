#include <iostream>
#include <cmath>

#define EQUATION sqrt(pow(a, 2) + pow(b, 2))

int main() {
	double c = 0;
	const double TOL = 1e-8;
	bool key = true;
	
	for (double a = 1; a < 500 && key == true; a++) 
		for (double b = 1; b < 500 && key == true; b++) {
			c = EQUATION;
			if (fabs(1000 - a - b - c) < TOL) {
				std::cout << std::fixed << (a * b * c) << std::endl;
				key = false;
			}
		}
}

// Output to console: 31875000.000000
