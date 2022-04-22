#include <iostream>

int main() {
	int t, max = 0, min = 0;
	std::cin >> t;
	int* divisor = new int[t];
	for (int i = 0; i < t; i++) {
		std::cin >> divisor[i];
	}
	
	max = divisor[0];
	min = divisor[0];
	for (int i = 0; i < t; i++) {
		if (max < divisor[i]) max = divisor[i];
		if (min > divisor[i]) min = divisor[i];
	}

	std::cout << max * min;	
	return 0;
}