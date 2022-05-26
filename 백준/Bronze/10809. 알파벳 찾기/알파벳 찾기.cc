#include <iostream>
#include<string>
using namespace std;

int main() {
    string input;
    string all = "abcdefghijklmnopqrstuvwxyz";
    cin >> input;
    for (int i = 0;i < all.length();++i) {
        cout << (int)input.find(all[i]) << ' ';
    }
   
}