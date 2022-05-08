#include <iostream>
using namespace std;

int main(void) {
    int N,M;
    cin >> N>>M;
    int* x;
    x = (int*)malloc(sizeof(int) * N);
    for (int i = 0;i < N;++i) {
        cin >> x[i];
    }
    for (int i = 0;i < N;++i) {
        if(x[i]<M)cout << x[i]<<' ';
    }
    
}