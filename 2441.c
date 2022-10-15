#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N,i,j,k;
	scanf("%d", &N);
	for (i = 0; i < N; i++) {
		for (j = N; j > N - i; j--)
			printf(" ");
		for (k = 0; k < N - i; k++)
			printf("*");
		printf("\n");
	}
}