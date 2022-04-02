#include<iostream>

int main() {
	int A;
	std::cin >> A;

	for (int i = 1;i < 10;++i) {
		std::cout << A <<" * "<< i <<" = "<< A*i<<"\n";
	}

	

	return 0;
}