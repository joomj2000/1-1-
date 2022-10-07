#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int M, D;
    int cnt=0;
    int mon[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
 

    cin >> M>> D;
    for (int i = 0;i < M;++i) {
        cnt+=mon[i];
    }
    cnt += (D-1);
    cnt %= 7;
    if (cnt == 0)cout << "MON";
    if (cnt == 1)cout << "TUE";
    if (cnt == 2)cout << "WED";
    if (cnt == 3)cout << "THU";
    if (cnt == 4)cout << "FRI";
    if (cnt == 5)cout << "SAT";
    if (cnt == 6)cout << "SUN";

    
   
    return 0;
} 