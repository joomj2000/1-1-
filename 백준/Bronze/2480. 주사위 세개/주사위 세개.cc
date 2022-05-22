#include <iostream>

using namespace std;

int main() {

    int x[3];
    int max = 0;
    int count = 1;
    int same = 0;

    for (int i = 0;i < 3;i++) {
        cin >> x[i];
    }

    for (int i = 0;i < 3;i++) {
        if (max < x[i]) {
            max = x[i];
        }
    }

    for (int i = 0;i < 2;i++) {
        for (int j = i+1;j < 3;++j) {
            if(x[i]==x[j]){ count++;same = x[i]; }
        }   
    }
    
    if (count >= 3)cout << 10000 + x[0] * 1000;
    else if (count == 2)cout << 1000 + same * 100;
    else cout << max * 100;
    
}