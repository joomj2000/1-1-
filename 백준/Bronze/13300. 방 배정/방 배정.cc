#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);

    
    int N,k,G,S;
    int arr[12] = {0,};
    int room = 0;
    //arr[0]=1학년 여자, arr[1]=2학년 여자/ arr[6]= 1학년 남자

    cin >> N>>k;

    for (int i = 0;i < N;++i) {
        cin >> S >> G;
        if (S == 0)arr[G - 1]++;
        else arr[G+5]++;
        

    }
    for (int i = 0;i < 12;++i) {
        if (arr[i] > 0) {
            if (arr[i] > 0) {
                if (arr[i] % k == 0)room += (arr[i] / k);
                else if (arr[i] % k > 0)room += (arr[i] / k + 1);
                else room++;
            }
        }
    }
    
    cout << room;
    return 0;
} 