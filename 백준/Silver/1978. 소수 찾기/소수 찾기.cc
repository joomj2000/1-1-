#include <iostream>
int main() {
	int N,x;
	
	int result = 0;
	std::cin >> N;
	for (int i = 0;i < N;++i) {
		std::cin >> x;
		bool isprime = true;
		for (int j = 2;j < x;++j) {
			if (x % j == 0) {
				isprime = false;
			}
		}
		if (x>1&&isprime) {
			result++;
		}
	}
	std::cout << result;
	return 0;
}