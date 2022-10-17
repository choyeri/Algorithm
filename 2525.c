#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int hour, minute,diff, max = 0;
	scanf("%d %d %d", &hour, &minute,&diff);
	hour += (diff / 60);
	minute += (diff % 60);

	if (minute > 59) {
		minute = minute-60;
		hour++;
	}
	if (hour > 23)
		hour = hour-24;
	printf("%d %d", hour, minute);
}