#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, k;
    int x[1000];

    cin >> N>> k;
    for (int i = 0;i < N;++i) {
        cin >> x[i];
    }

    sort(x, x + N);

    cout << x[N - k];

    
   
    return 0;
} 