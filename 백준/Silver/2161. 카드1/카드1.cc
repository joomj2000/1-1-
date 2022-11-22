#include <bits/stdc++.h>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    queue<int> Q;
    int n;
    //int num = 0;
    cin >> n;

    for (int i = 1;i <= n;++i) {
        Q.push(i);
    }
    while (1) {
        cout << Q.front()<<" ";
       // num++;
        Q.pop();
        if (Q.empty())break;
        int next = Q.front();
        Q.pop();
        Q.push(next);
    }
    
}