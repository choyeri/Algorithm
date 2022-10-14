#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N,time;
	int M=0, Y=0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d ", &time);
		Y += (time / 30 + 1);
		M += (time / 60 + 1);
	}
	Y *= 10;
	M *= 15;
	if (M < Y)
		printf("M %d", M);
	else if (M == Y)
		printf("Y M %d", Y);
	else
		printf("Y %d", Y);
}