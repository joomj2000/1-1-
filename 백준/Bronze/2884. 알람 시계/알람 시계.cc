#include <iostream>

int main() {
    int N,M;
   
    std::cin >> N>>M;

    if (M >= 45) {
        M = M - 45;
    }

    else {
        if (N > 0) {
            N = N - 1;
        }
        else {
            N = 23;
        }
        M = M + 60 - 45;
    }
    std::cout << N<<' ' << M;
    
   
	return 0;
}