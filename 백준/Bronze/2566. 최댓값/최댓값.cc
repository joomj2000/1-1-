#include<iostream>
#define N 9
using namespace std;
 
int y, x;       //max일때 y, x;
int result;      //max 값
 
void Solution(){
    int tmp;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> tmp;
 
            if(tmp > result){  //바로 비교
                y = i;
                x = j;
                result = tmp;
            }
        }
    }
 
}
 
void Output(){
    cout << result << endl;
    cout << y+1 << " " << x+1;  //배열의 index와 실제 위치 차이
}
 
int main(void){
 
    Solution();
    Output();
 
    return 0;
}
