
#include <bits/stdc++.h>

using namespace std;

struct st{
	int num;
	int high;
};

int main() {
	stack<st> S;
	int n,t;
	//cin >> n;
	scanf("%d", &n);
	S.push({ -1,-1 });
	
	for (int i = 1;i <= n;++i) {
		//cin >> t;
		scanf("%d", &t);

		while (S.top().high < t) {
			//if (S.empty())break;
			//else 
			S.pop();
			if (S.empty())break;
		}
		if (S.empty() || S.top().high < t) printf("0 ");

		//else cout << S.top().num<<" ";
		else printf("%d ", S.top().num);
		
		
		S.push({ i,t });
		
	}




	/*
	5
2 6 3 1 8
*/
	
}