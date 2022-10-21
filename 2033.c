#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n, count=0;
	scnaf("%d", &n);
	while (n / 10 > 0) {
		if (n % 10 > 4)
			n += 10;
		n /= 10;
		count++;
	}
	for (int i = 0; i < count; i++) {
		n *= 10;
	}
	printf("%d", n);
}