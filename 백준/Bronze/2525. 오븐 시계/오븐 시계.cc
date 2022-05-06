#include <iostream>
using namespace std;

int main(void) {
    int N,M,K;
    cin >> N>>M>>K;
    M = M + K;

    while (M >= 60) {
        N++;
        M -= 60;
    }
    if (N >= 24) {
        N -= 24;
    }
    
     cout <<N<<" "<<M;
    
    
}