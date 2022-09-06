#include <stdio.h>
#include <math.h>

int main()
{
	int N[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &N[i]);
		sum += pow(N[i], 2);
	}
	printf("%d", sum % 10);
}