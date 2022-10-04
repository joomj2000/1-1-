#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int x[6] = {1,1,2,2,2,8};
    for (int i = 0;i < 6;++i) {
        int t;
        cin >> t;
        cout << x[i] - t<<" ";
    }
   
    return 0;
} 