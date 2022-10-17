#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string str;
    cin >> str;
    char a;
    for (int i = 0;i < str.length();++i) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            a= str[i] - 'a' + 'A';
        }
        else {
           a=str[i] - 'A' + 'a';
        }
        cout << a;
    }

   
   
    return 0;
} 