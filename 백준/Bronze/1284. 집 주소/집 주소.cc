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
   
   
    
    while(1) {
       int len = 1;
        cin >> N;
        if (N == 0)break;
        while (N > 0) {
            int n;
            n = N % 10;
            N /= 10;
            if (n == 1)len += 2;
            else if (n == 0)len += 4;
            else len += 3;
            len++;
        }
        cout << len<<"\n";

   }

    return 0;
} 