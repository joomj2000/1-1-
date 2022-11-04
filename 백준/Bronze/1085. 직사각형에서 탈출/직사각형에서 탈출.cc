#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int x,y,w,h;
    int t[4];
    string str;
    cin >> x>>y>>w>>h;
    t[0] = x;t[1] = y;
    int c1, c2;
    if (w > x)c1 = w - x;
    else c1 = x - w;
    if (h > y)c2 = h - y;
    else c2 = y - h;

    t[2] = c1;t[3] = c2;
    sort(t,t+4);
    cout << t[0];

    return 0;
} 