#include <iostream>
#include <cstring>
int main() {
    int N,M,max=0;
    int* x;
    std::cin >> N >> M;
    x = (int*)malloc(sizeof(int) * N);
    for (int i = 0;i < N;++i) {
        std::cin >> x[i];
    }
    for (int i = 0;i < N;++i) {
        for (int j = i+1;j < N;++j) {
            for (int k = j+1;k < N;++k) {
                if (x[i] + x[j] + x[k]<=M && max< x[i] + x[j] + x[k]) {
                    max = x[i] + x[j] + x[k];
                }
            }
        }
    }

    std::cout << max;
   
	return 0;
}