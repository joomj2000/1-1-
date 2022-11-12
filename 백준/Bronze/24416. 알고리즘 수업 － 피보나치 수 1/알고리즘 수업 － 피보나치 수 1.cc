#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
using namespace std;

int f[41] = { 0, };
int fib(int n) {
    if (n == 1|| n == 2)
        return 1; 
    else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
    f[1] = f[2];
    f[2] = 1;
    int cnt = 0;
    for (int i = 3;i <= n;++i) {
        f[i] = f[i - 1] + f[i - 2];
        cnt++;
        
    }
    return cnt;
    
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    int n=0;
    cin >> n;
    cout << fib(n) << " "<<fibonacci(n);
    //cout << n;
   

    return 0;
} 