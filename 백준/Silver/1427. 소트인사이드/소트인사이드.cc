#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N,i=0;
    int x[11];

    cin >> N;
    while (N > 0) {
        x[i++] = N % 10;
        N /= 10;
     }

    sort(x, x + i);
    for(int j=i-1;j>=0;--j)cout << x[j];
    
   
    return 0;
} 