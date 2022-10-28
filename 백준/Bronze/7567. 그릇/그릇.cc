#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int num = 10;
    string str;
    cin >> str;
    for (int i = 1;i < str.length();++i) {
        if (str[i - 1] != str[i]) {
            num += 10;
        }
        else {
            num += 5;
        }
    }
   
    cout << num;

    return 0;
} 