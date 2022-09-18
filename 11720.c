#include <stdio.h>

int main()
{
	int sum = 0, N;
	scanf("%d", &N);
	char A[N];
	scanf("%s", A);
	for (int i = 0; i < N; i++) {
		sum += A[i] - '0';
	}
	printf("%d", sum);
}