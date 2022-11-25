#include <bits/stdc++.h>
using namespace std;

const int MX = 500;
int dat[2 * MX + 1];
int head = MX, tail = MX;

void push_front(int x) {
	dat[--head] = x;
}

void push_back(int x) {
	dat[tail++] = x;
}

void pop_front() {
	head++;
}

void pop_back() {
	tail--;
}

int front() {
	return dat[head];
}

int back() {
	return dat[tail-1];
}


int main(void) {
	int n,num,k;
	int result = 0;
	cin >>n;
	for (int i = 1;i <= n;++i) {
		push_back(i);
	}
	cin >> num;
	for (int i = 0;i < num;++i) {
		cin >> k;
		int j;
		for (j = head;j <= tail;++j) {
			if (dat[j] == k)break;
		}
		if (j <= (head + tail) / 2) {
			while (front() != k) {
				int t = front();
				pop_front();
				push_back(t);
				result++;
			}
		}
		else {
			while (front() != k) {
				int t = back();
				pop_back();
				push_front(t);
				result++;
			}
		}
		pop_front();
	}

	cout << result;
}