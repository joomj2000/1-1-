#include<stdio.h>

int main() {
	
	int x[9];
	int i,max=0,max_i=0;

	for (i = 0;i < 9;++i) {
		scanf("%d", &x[i]);
	}
	
	for (i = 0;i < 9;++i) {
		if (x[i] > max)
		{
			max = x[i];
			max_i = i;
		}
	}
	printf("%d\n%d", max, max_i+1);
	return 0;
}