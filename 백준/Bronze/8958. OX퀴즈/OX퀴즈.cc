#include <iostream>
#include <cstring>

int main() {
	int N,n;
	int score=0;
	char result[80];

	
	std::cin >> N;

	for (int i = 0;i < N;++i) {
		score = 0;
		int weigh = 1;
		std::cin >> result;
		for (int j = 0;j < strlen(result);++j) {
			if (result[j] == 'O') {
				score += weigh;
				weigh++;
			}
			else {
				weigh = 1;
			}
		}
	
		std::cout << score<<"\n";
	}


	return 0;
}