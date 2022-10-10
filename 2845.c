#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int L, P, people[6], count;
	scanf("%d %d", &L, &P);
	count = L * P;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &people[i]);
		printf("%d ", people[i] - count);
	}
}