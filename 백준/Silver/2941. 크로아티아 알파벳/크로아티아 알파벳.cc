#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main() {
    vector<string> croatia = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    int idx;
    string str;
    cin >> str;
    for(int i = 0; i < croatia.size(); i++)
    {
        while(1){
            idx = str.find(croatia[i]);
            if(idx == string::npos)
                break;
            str.replace(idx,croatia[i].length(),"#");
        }
    }
    cout << str.length();
}