#include <stdio.h>

int main()
{
	int N,factorial=1;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		factorial *= (i+1);
	}
	printf("%d", factorial);
}