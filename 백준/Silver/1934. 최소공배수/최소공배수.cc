#include <iostream>
#include <algorithm>
using namespace std;

int GCD(int a, int b) {
	if (b == 0) return a;
	else return GCD(b, a % b);
}
int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int a, b, max;
		scanf("%d %d", &a, &b);
		max = GCD(a, b); 
		cout << a * b / max << '\n';
	}
}