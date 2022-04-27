#include <iostream>
using namespace std;

int main(void) {
    int N, count = 0;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        if (i < 100) { count++; }
        else {
            int a1, a2, a3;
            a3 = i / 100;
            a1 = i % 10;
            a2 = i% 100 / 10;
            if (a3 - a2 == a2 - a1)count++;
        }
    }
    cout << count;
}