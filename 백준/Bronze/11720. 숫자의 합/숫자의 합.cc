#include <iostream>
int main() {
	int N;
	char *num;
	int sum = 0, k;
	std::cin >> N;
	num = (char*)malloc(sizeof(char) * N);
    
    std::cin >> num;
	
	for (int i = 0;i < N;++i) {
		k = num[i];
		sum += ((int)k-'0');
		}
	std::cout<<sum;

	return 0;
}