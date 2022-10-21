#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int k;
    cin >> k;
    int p1 = 100, p2 = 100;
    for (int i = 0;i < k;++i) {
        int m1, m2;
        cin >> m1 >> m2;
        if (m1 > m2) {
            p2 -= m1;
        }
        if (m1 < m2) {
            p1 -= m2;
        }
    }
     cout << p1<<'\n'<<p2;
    
   
   
    return 0;
} 