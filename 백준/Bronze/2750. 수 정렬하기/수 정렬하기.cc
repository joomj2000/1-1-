#include <iostream>
#include <cstring>

int main() {
    int N;
    int* x;
    std::cin >> N;
    x = (int*)malloc(sizeof(int) * N);
    
    for (int i = 0;i < N;++i) {
        std::cin >> x[i];    
    }
   

    for (int i = 0;i < N;++i) {
        for (int j = 1 + i;j < N;++j) {
            if (x[i] > x[j]) {
                int temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
   

    for (int i = 0;i < N;++i) {
        std::cout << x[i]<<"\n";
    }
   
	return 0;
}