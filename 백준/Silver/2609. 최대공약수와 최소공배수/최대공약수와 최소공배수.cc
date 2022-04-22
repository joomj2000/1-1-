#include <iostream>
#include <cstring>

int main() {
    int N,M;
    int m;

    std::cin >> N>>M;
    
    if (N > M) { 
        for (int i = 1;i <= M;++i) {
            if (N % i == 0 && M % i == 0) {
                m = i;
            }
        }
        std::cout << m << "\n";
        for (int i = N;;++i) {
            if (i % N == 0 && i % M == 0) {
                std::cout << i << "\n";break;
            }
        }
    }
    else {
        for (int i = 1;i <= N;++i) {
            if (N % i == 0 && M % i == 0) {
                m = i;
            }
        }
        std::cout << m << "\n";
        for (int i = M;;++i) {
            if (i % N == 0 && i % M == 0) {
                std::cout << i << "\n";break;
            }
        }
    }
    

   
	return 0;
}