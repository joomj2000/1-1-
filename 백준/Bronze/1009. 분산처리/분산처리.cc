#include<stdio.h>
#include<algorithm>
using namespace std;

int main(void)
{
	int T;
	int a, b;
	int ans;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		ans = 1;
		scanf("%d %d", &a, &b);
		for (int j=0;j<b;j++)
		{
			ans = (ans * a) % 10;
		}
		if (ans == 0) printf("10\n");
		else printf("%d\n", ans);
	}

}
