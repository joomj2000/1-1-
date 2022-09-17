#include <iostream>
#include<string>
using namespace std;

int main() {
    int arg=0, x[5];

  
    for (int i = 0;i < 5;++i) {
        cin >> x[i];
        arg += x[i];
    }
       for (int i = 0;i < 5;++i) {
            for (int j = i+1;j < 5;++j) {
                if (x[i] > x[j]) {
                    int tmp = x[i];
                    x[i] = x[j];
                    x[j] = tmp;
                }
            }
        }
        cout << arg/5<<"\n"<<x[2];

   
}