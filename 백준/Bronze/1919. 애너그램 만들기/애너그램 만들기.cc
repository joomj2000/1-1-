#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    int num;
    getline(cin, s1);
    getline(cin, s2);
    
    num = s1.length() + s2.length();

    for (int i = 0;i < s1.length();++i) {
        for(int j=0;j<s2.length();++j){
            if (s1[i] == s2[j]) {
                num-=2;
                s2[j] = 'A';
                break;
            }
        }
    }

    cout << num;

    return 0;
} 