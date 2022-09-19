#include <iostream>
#include<string>
using namespace std;

int main() {
    int Card[20],a,b;
    //cin >> N;
  
    for (int i = 0;i < 20;++i) {
        Card[i] = i + 1;
    }
    
    for (int i = 0;i < 10;++i) {
        cin >> a >> b;
        a--;b--;
        for (;a < b; a++, b--) {
            int tmp = Card[a];
            Card[a] = Card[b];
            Card[b] = tmp;
        }
    }
   
    for (int i = 0;i < 20;++i) {
        cout<<Card[i]<<" ";
    }
  

   
}