#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int x;
    
    string ch;

    cin >> x;
    for (int i = 0;i <x;++i) {
        cin >> ch;
        cout << ch[0]-'0' + ch[2]-'0'<<"\n";

    }
    

   
   
    return 0;
} 