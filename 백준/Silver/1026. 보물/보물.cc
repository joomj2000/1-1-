#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    int A[50], B[50], m[50];

    cin >> N;
    for (int i = 0;i < N;++i) {
        cin >> A[i];
    }
    for (int i = 0;i < N;++i) {
        cin >> B[i];
    }
    int mlp = 1;
    int sum = 0;

    sort(A, A + N);
    sort(B, B + N);
   
    for (int i = 0;i < N;++i) {
        mlp = A[N-1-i] * B[i];
        sum += mlp;
    }

    cout << sum;
   

    return 0;
} 