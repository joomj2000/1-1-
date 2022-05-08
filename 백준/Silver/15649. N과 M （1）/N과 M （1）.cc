#include <iostream>
using namespace std;
int N,M;
int arr[9];
 bool visit[9];

 void DFS(int k) {
     if (k == M) {
         for (auto i = 0;i < M;++i) {
             cout << arr[i] << " ";
         }
         cout << "\n";
         
     }
     else {
         for (auto i = 1;i <= N;++i) {
             if (!visit[i]) {
                 visit[i] = true;
                 arr[k] = i;
                 DFS(k + 1);
                 visit[i] = false;
             }
         }
     }
 }
int main(void) {
   
    cin >> N>>M;
    DFS(0);
   
}