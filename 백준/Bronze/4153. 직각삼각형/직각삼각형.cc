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
    int x[3];
    while (1) {
        cin >> x[0] >> x[1] >> x[2];
        sort(x,x+3);
        if (x[2] == 0)break;
        if (x[0] * x[0] + x[1] * x[1] == x[2] * x[2])cout << "right" << "\n";
        else cout<<"wrong" << "\n";
        
    }
   
} 