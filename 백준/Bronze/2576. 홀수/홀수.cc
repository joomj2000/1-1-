#include <iostream>
#include<string>
using namespace std;

int main() {
    
    int sum = 0, x, min = 101;

    for (int i = 0;i < 7;++i) {
         cin >> x;
         if (x % 2 != 0) {
             sum += x;
             if (min > x) {
                 min = x;
             }
         }
        
    }
    if (sum == 0)cout << "-1";
    else cout << sum<<"\n"<<min;
}