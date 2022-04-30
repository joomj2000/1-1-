#include <iostream>
using namespace std;

int main(void) {;
    int x[42] = {0,};
    int k;
    int cnt = 0;

    for (int i = 0;i < 10;++i) {
        cin >>k;
        x[k % 42]++;
    }
    for (int i = 0;i < 42;++i) {
        if (x[i] > 0)cnt++;
    }
    cout << cnt;
}