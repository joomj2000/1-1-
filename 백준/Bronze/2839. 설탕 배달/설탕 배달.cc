#include <iostream>
#include <cstring>

int main() {
	int N,n;
	int f=0, t=0;
	
	std::cin >> N;
	n = N;
    
    while (n >= 5) {
			f=n/ 5;
			n %= 5;
		}
		if (n % 3 == 0) {
			t = n / 3;
		}
		else {
			while (f > 0) {
				f--;
				n = N - (f * 5);
				if (n % 3 == 0) {
					t = n / 3;
					break;
				}
			}
		
		}
		if (t + f == 0) {
			std::cout << -1;
		}
		else {
			std::cout << f+t;
		}
	

	return 0;
}