#include <iostream>
using namespace std;

int main(void) {
    int N;
    cin >> N;
    for (int i = 1;i <= N;++i) {
        for (int j = i;j <N;++j) {
            cout << " ";
        }
        for (int k = 0;k < i;++k)cout << "*";
        cout << "\n";
    }
    
}