#include <stdio.h>

int main()
{
	int input;
	int N[42] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &input);
		input %= 42;
		N[input]++;
	}
	int cnt = 0;
	for (int i = 0; i < 42; i++) {
		if (N[i] != 0) cnt += 1;
	}
	printf("%d", cnt);
}