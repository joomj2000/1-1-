#include <iostream>
#include<string>
using namespace std;

int main() {
    int N;
    cin >> N;
  
    for (int i = 0;i < N;++i) {
        for (int j = 0;j < N * 2;++j) {
            if (i >= j)cout << "*";
            else if(i>=(N*2-j-1))cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }

   
  for (int i = N-1;i >0;--i) {
        for (int j = N*2;j >0;--j) {
            if (i >= j)cout << "*";
            else if (N*2-j+1 <=i )cout << "*";
            else cout << " ";
        }
        cout << "\n";
    }
    

   
}