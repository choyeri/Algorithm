#include <stdio.h>

int main()
{
	int hour, min;
	scanf("%d %d", &hour, &min);
	if (hour == 0) {
		if (min >= 45) {
			min -=45;
			printf("%d %d", hour, min);
		}
		else if (min < 45) {
			hour = 23;
			min = min + 60 - 45;
			printf("%d %d", hour, min);
		}
	}
	else if (hour > 0) {
		if (min >= 45) {
			min -=45;
			printf("%d %d", hour, min);
		}
		else if (min < 45) {
			hour -=1;
			min = min + 60 - 45;
			printf("%d %d", hour, min);
		}
	}
}