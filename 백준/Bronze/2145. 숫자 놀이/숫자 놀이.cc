#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include <cmath>
#include <list>
using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N=1;
    int num = 0;
    int result;
    while (1) {
        cin >>N;
        result = N;
        if (N == 0)break;
        while (result >= 10) {
            result = 0;
            while (N > 0) {
               
                num = N % 10;
                N /= 10;
                result += num;
            }
            N = result;
        }
        cout << result << "\n";
    }

   
} 