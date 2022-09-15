#include <stdio.h>

int main()
{
	int N, X;
	scanf("%d %d", &N, &X);
	int num[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < N; i++) {
		if (num[i] < X) printf("%d ", num[i]);
	}
}