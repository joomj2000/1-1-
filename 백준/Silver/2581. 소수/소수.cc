#include <iostream>
#include <cstring>

int main() {
	int N,M;
	
	int result = 0,min=10000;
	std::cin >> N>>M;
	for (int i = N;i <= M;++i) {
		bool isprime = true;
		for (int j = 2;j < i;++j) {
			if (i % j == 0) {
				isprime = false;
			}
		}
		if (i>1&&isprime) {
			if (min > i) {
				min = i;
			}
			result+=i;
		}
	}
	if (result != 0)std::cout << result << '\n' << min;
	else std::cout << -1;
	return 0;
}