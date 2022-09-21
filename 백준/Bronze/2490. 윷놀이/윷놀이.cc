#include <iostream>
#include<string>
using namespace std;

int main() {
    
    int m,n=0;

    for (int i = 0;i < 3;++i) {
        for (int j = 0;j < 4;++j) {
            cin >> m;
            if (m == 0) {
                n++;
            }
        }
        if (n == 1) cout << "A\n";
        else if (n == 2)cout << "B\n";
        else if (n == 3)cout << "C\n";
        else if (n == 4)cout << "D\n";
        else cout << "E\n";
        n = 0;
    }
}