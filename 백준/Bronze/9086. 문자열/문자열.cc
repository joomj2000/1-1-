#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string str;
    cin >> n;
    for (int i = 0;i<n;i++) {
        cin >> str;
        cout << str[0] << str[str.length() - 1]<<"\n";
        
    }
   
    
    return 0;
} 