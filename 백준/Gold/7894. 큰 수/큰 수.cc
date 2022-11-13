#include <iostream>
#include <algorithm>
#include <string>
#include<vector>
#include <cmath>
using namespace std;


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int k;
    cin >> k;
    for (int j = 0;j < k;++j) {
        double n;
        cin >> n;
        double p = 0;
        for (int i = 1;i <= n;++i) {
            p += log10(i);
        }
        printf("%d\n", (int)p + 1);
    }

    return 0;
} 