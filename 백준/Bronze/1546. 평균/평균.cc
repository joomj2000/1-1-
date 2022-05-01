#include <iostream>
using namespace std;

int main(void) {;
    int N,max=0;
    int* x;
    long double avg = 0;
    cin >> N;
    x = (int*)malloc(sizeof(int) * N);

    for (int i = 0;i < N;++i) {
        cin >>x[i];
    }
    for (int i = 0;i < N;++i) {
        if (x[i] > max) {
            max = x[i];
       }
    }
    for (int i = 0;i < N;++i) {
       avg+=(x[i]/(long double)max * 100);
    }
    cout << avg/N;
}