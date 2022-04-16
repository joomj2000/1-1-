#include <iostream>
#include <cstring>

int main() {
    int N,M;
    std::cin >>N>>M;
   
    if (N > 0 && M > 0) {
        std::cout << 1;
    }
    else if (N < 0 && M > 0) {
        std::cout << 2;
    }
    else if (N < 0 && M < 0) {
        std::cout << 3;
    }
    else {
        std::cout << 4;
    }
   
   
   
	return 0;
}