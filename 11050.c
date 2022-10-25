#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {
	if (n <= 1) return 1;
	return n * factorial(n - 1);
}

int main()
{
	int n, k, result = 0;
	scanf("%d %d", &n, &k);
	printf("%d", factorial(n) / (factorial(n - k) * factorial(k)));
}