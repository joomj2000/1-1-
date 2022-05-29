#include <iostream>
#include<string>
using namespace std;

int main() {
    int k, m;
    string x;
    cin >> k;
    for (int i = 0;i < k;++i) {
        cin >> m;
        cin >> x;
        
        for (int j = 0;j < x.length();++j) {
            for (int i = 0;i < m;++i) {
                cout << x[j];
            }
        }
        cout << "\n";

    }
    
   
}