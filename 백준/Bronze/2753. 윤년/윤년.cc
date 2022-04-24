#include <iostream>

int main() {
    int N;
   
    std::cin >> N;
    if (N % 4 == 0 && N % 100 != 0) {
        std::cout << 1;
    }
    else if (N % 400 == 0) {
        std::cout << 1;
    }
    else {
        std::cout << 0;
    }
   
	return 0;
}