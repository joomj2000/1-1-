#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k;
    cin >> k;
    int num = 0;
    int sum = 1;
    while (k > 9) {
        int k1 = k;
        num++;
        sum = 1;
        while (k1 > 0) {
            int k2 = k1 % 10;
            sum *= k2;
            k1 /= 10;
        }
        k = sum;
    }
     cout <<num;
    
   
   
    return 0;
} 