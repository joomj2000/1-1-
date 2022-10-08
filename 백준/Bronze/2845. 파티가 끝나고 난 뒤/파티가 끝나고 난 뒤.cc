#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int L, P;
    int x[5];

    cin >> L>> P;
    for (int i = 0;i < 5;++i) {
        cin>>x[i];
    }
    for (int i = 0;i < 5;++i) {
        cout << x[i]- L * P <<" ";
    }
    
   
    return 0;
} 