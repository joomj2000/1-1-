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
    int N;
    string str;
   
    char s[256];
    while (1) {
        N = 0;
        getline(cin, str);
        if (str[0] == '#')break;
        for (int i = 0;i < str.length();++i) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i]=='i'||str[i] == 'o'|| str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'U' || str[i] == 'I') {
                N++;
            }
        }
        cout << N<<"\n";
    }
} 