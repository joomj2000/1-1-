#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = N*2-1;i > 0;i-=2) {
        int j = 0;
        for (;j < (N * 2 - 1 - i)/2;++j) {
            cout << " ";
        }
        for (int k = 0;k < N * 2 - 1 - j*2;++k) {
            cout << "*";
        }
       
        cout << "\n";
    }

    for (int i =3;i <= N * 2 - 1;i += 2) {
        int j = 0;
        for (;j < (N * 2 - 1 - i) / 2;++j) {
            cout << " ";
        }
        for (int k = 0;k < N * 2 - 1 - j * 2;++k) {
            cout << "*";
        }
        
        cout << "\n";
    }

    return 0;
} 