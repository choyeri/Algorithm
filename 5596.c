#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int score, Min = 0, Man = 0;
	for (int i = 0; i < 4; i++) {
		scanf("%d", &score);
		Min += score;
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &score);
		Man += score;
	}
	if (Min >= Man)
		printf("%d", Min);
	else
		printf("%d", Man);
}