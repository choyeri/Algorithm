#include <stdio.h>

int main()
{
	int N;
	scanf("%d", &N);
	if (N % 5 == 0)
		printf("%d", N / 5);
	else
		printf("%d",N / 5 + 1);
}