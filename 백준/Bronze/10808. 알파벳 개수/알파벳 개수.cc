#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);


    char x[101];
    int ch[26] = { 0, };
    string s;
    cin >> s;
   
    for (int i = 0;i < s.length();++i) {
 
        ch[s[i] - 'a']++;
    }
    for (int i = 0;i < 26;++i) {
        cout << ch[i] << " ";
    }
   

    return 0;
} 