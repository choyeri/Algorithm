#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N,num,count=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		for (int j = 2; j <= num; j++) {
			if (num == j)
				count++;
			if (num % j == 0)
				break;
		}
	}
	printf("%d", count);
}