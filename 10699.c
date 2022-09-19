#include <stdio.h>
#include <time.h>

int main()
{
	time_t t = time(NULL);
	struct tm timer = *localtime(&t);

	printf("%d-%.2d-%.2d", timer.tm_year + 1900, timer.tm_mon + 1, timer.tm_mday);
}