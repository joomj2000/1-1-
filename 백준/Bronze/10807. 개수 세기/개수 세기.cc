#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N, x[100],k,num=0;
    cin >> N;
    for (int i = 0;i < N;++i) {
        cin >> x[i];
    }
    cin >> k;

    for (int i = 0;i < N;++i) {
        if (x[i] == k)num++;
    }
    
    cout << num;


    return 0;
} 