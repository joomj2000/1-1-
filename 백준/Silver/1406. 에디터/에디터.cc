#include <iostream>
#include <list>
using namespace std;

int main() {
	int N,M;
	string str;
	cin >> str;
	N = str.length();

	list<char> L = {};
	
	for (auto c:str) {
		L.push_back(c);
		
	}
	auto t = L.end();
	cin >>M;

	for (int i = 0;i < M;++i) {
		char ch;
		cin >> ch;
		if (ch == 'P') {
			char add;
			cin >> add;
			L.insert(t,add);
		}
		else if (ch == 'L') {
			if (t != L.begin())t--;
		}
		else if (ch == 'D') {
			if (t != L.end())t++;
		}
		else if (ch == 'B') {
			if (t != L.begin()) {
				t--;
				t = L.erase(t);
			}
		}
	}
	
	for (auto i : L)cout << i;
	
}