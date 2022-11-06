#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N,F;
    int c1=-1, c2,m1,m2;
    int M;
    cin >> N >> F;
    M = N;
    int N1;

    m1 = M % 10;
    M /= 10;
    int t = M % 10;
    t *= 10;
    m1 = t + m1;
    N1 = N;
    for (int i = 0;i <= m1;++i,N1--) {
        if (N1% F == 0)c1 = N1;
    }
    N1 = N;
    if (c1 == -1) {
        for (int i = 0;i < 100 - m1;++i,N1++) {
            if (N1 % F == 0) { c1 = N1; break; }

        }
    }
   

    c2 = c1 % 10;
    c1 /= 10;
    t = c1 % 10;
    t *= 10;
    c2 = t + c2;
    printf("%02d", c2);
    return 0;
} 