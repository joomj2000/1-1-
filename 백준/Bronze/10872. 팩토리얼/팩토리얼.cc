#include <iostream>
#include <cstring>

int f(int n) {
	if (n <= 1)return n;
	n= n*f(n - 1);
	return n;
}


int main() {
	int N;
	std::cin >>N;
	
	if(N==0)std::cout << 1;
	else std::cout << f(N);
	
	return 0;
}