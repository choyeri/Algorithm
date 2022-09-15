#include <stdio.h>

int main()
{
	int N, min, max;
	scanf("%d", &N);
	int num[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
		min = num[i];
		max = num[i];
	}
	for (int i = 0; i < N; i++) {
		if (num[i] > max) max = num[i];
		else if (num[i] < min) min = num[i];
	}
	printf("%d %d", min, max);
}