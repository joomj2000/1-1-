#include <iostream>

int main() {
    int N,M;

    std::cin >> N>>M;
   
    while (N != 0 && M != 0) {
        if (N % M == 0) {
            std::cout << "multiple"<<"\n";
        }
        else if (M % N == 0) {
            std::cout << "factor" << "\n";
        }
        else {
            std::cout << "neither" << "\n";
        }
        std::cin >> N >> M;

    }
  
	return 0;
}