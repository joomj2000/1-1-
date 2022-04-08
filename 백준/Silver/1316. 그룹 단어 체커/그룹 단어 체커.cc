#include <iostream>
#include <cstring>


int main() {
	int N;
	int result = 0;
	char ch[100],c;
	std::cin >> N;

	for (int i = 0;i < N;++i) {
		std::cin >> ch;
		int r = 0;
		for (int i = 0;i < strlen(ch);++i) {
			c = ch[i];
			if (ch[i + 1] != ch[i]) {
				for (int j = i + 2;j < strlen(ch);++j) {
					if (ch[j] == ch[i]) {
						r++;
					}
				}
			}
			
		}if (r == 0)result += 1;
	}
	
		std::cout << result;


	return 0;
}