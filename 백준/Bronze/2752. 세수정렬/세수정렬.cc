#include <iostream>
#include<string>
using namespace std;

int main() {
    
    int x[3];

    for (int i = 0;i < 3;++i) {
        cin >> x[i];
    }

    for (int i = 0;i < 3;++i) {
        for (int j = 0;j < 3;++j) {
            if (x[i] < x[j]) {
                int tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
        }
    }

    for (int i = 0;i < 3;++i) {
        cout << x[i]<<" ";
    }

   
}