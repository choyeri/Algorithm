#include <stdio.h>

int main()
{
	char score[3];
	scanf("%s", score);
	float result = 0.0;
	switch (score[0]) {
	case 'A':
		result = 4.0; break;
	case 'B':
		result = 3.0; break;
	case 'C':
		result = 2.0; break;
	case 'D':
		result = 1.0; break;
	default:
		result = 0.0; break;
	}
	switch (score[1]) {
	case '+':
		result += 0.3; break;
	case '-':
		result -= 0.3; break;
	}
	printf("%.1f", result);
}