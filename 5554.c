#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int total_time=0,moving_time;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &moving_time);
		total_time += moving_time;
	}
	printf("%d\n", total_time / 60);
	printf("%d", total_time % 60);
}