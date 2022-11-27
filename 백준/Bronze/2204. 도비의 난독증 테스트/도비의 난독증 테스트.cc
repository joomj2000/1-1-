#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void){
    while(1){
        int n;
        cin>>n;
        if(n==0) return 0; 
        vector<pair<string, string> > vec;
        string str;
        for(int i=0; i<n; i++){
            cin>>str;
            string tmp = str;
            for(int i=0; i<str.size(); i++){
                if(str[i]>='A' && str[i]<='Z'){
                    str[i] = str[i]-'A'+'a';
                }
            }
            vec.push_back(make_pair(str,tmp));
        }

        sort(vec.begin(),vec.end());
        cout<<vec.front().second<<"\n";
    }
}