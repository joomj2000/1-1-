#include <iostream>
using namespace std;

int main(void) {
    int A,B,C,N;
    int x[10] = {0,0,0,0,0,0,0,0,0,0};
    cin >> A>>B>>C;

    N = A * B * C;

    while (N > 0) {
        int t = N % 10;
        N = N / 10;
        if (t == 0) {
            x[0]++;
        }
        else if (t == 1) {
            x[1]++;
        }
        else if (t == 2) {
            x[2]++;
        }
        else if (t == 3) {
            x[3]++;
        }
        else if (t == 4) {
            x[4]++;
        }
        else if (t == 5) {
            x[5]++;
        }
        else if (t == 6) {
            x[6]++;
        }
        else if (t == 7) {
            x[7]++;
        }
        else if (t == 8) {
            x[8]++;
        }
        else if (t == 9) {
            x[9]++;
        }
    }

    for(int i=0;i<=9;++i)
    cout << x[i]<<"\n";
}