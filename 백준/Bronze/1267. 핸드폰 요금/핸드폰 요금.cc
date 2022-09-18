#include <iostream>
#include<string>
using namespace std;

int main() {
    int N, x[20],m1=0,m2=0;
    cin >> N;
  
    for (int i = 0;i < N;++i) {
        cin >> x[i];
    }

    for (int i = 0;i < N;++i) {
        if (x[i] < 29) {
            m1 += 10;
        }
        else {
            m1+=10;
            m1 += ((x[i] / 30)*10);
        }
    
    }

    for (int i = 0;i < N;++i) {
        if (x[i] < 29) {
            m2 += 15;
        }
        else {
            m2+=15;
            m2 += ((x[i] / 60)*15);
        }

    }
    if(m1<m2) cout << "Y " << m1;
    else if(m1 > m2) cout << "M " << m2;
    else  cout << "Y " <<"M "<< m1;
  

   
}