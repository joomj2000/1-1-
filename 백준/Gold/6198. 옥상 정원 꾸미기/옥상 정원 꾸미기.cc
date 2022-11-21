#include <bits/stdc++.h>

using namespace std;



int main() {
	stack<int> S;
	int n,t;
	//cin >> n;
	scanf("%d", &n);
	S.push(-1);
	long long num = 0;
	
	for (int i = 1;i <= n;++i) {
		//cin >> t;
		scanf("%d", &t);

		while (S.top() < t) {
			//if (S.empty())break;
			//else 
			S.pop();
			if (S.empty())break;
		}
		if (S.empty()||S.top()>t)S.push(t);
		if(!S.empty())num += (S.size()-1);
		//if (S.empty() || S.top().high < t) printf("0 ");

		//else cout << S.top().num<<" ";
		//else printf("%d ", S.top().num);
		
		
		
		
	}
	cout << num;

	
}