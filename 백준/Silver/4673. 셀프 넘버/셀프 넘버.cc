#include <iostream>
//std::cout  std::cin >> A;

bool self[10001];

int is_self(int n) {
	
	int num = 0;
	num= n + n / 1000 + n % 1000 / 100 + n % 100 / 10 + n % 10;
	return num;
}

int main() {
	int t;
	self[1] = false;

	for (int a=1;a <= 10000;++a) {
		if (a < 10000) {
			t = is_self(a);
			if (t < 10000) {
				self[t] = true;
			}
		}
	}

	for (int i = 1;i < 10000;++i) {
		if (!self[i])std::cout << i << '\n';
	}


	return 0;
}