#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, x[7], i = 0, num[10] = {0,};
    
    cin >> N;
    
    while (N > 0) {
        x[i] = N % 10;
        N = N / 10;
        i++;
    }
    for (int j = 0;j < i;++j) {
        num[x[j]]++;
    }

    int M = (num[6] + num[9]+1) / 2;
    num[6] = M;num[9] = M;
    int max = 0;

    for (int i = 0;i < 10;++i) {
        if (num[i] > max) {
            max = num[i];
        }
    }

    cout << max;

    return 0;
} 