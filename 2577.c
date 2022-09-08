#include <stdio.h>

int main()
{
	int input,mul=1;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &input);
		mul *= input;
	}
	int N[10]={0};
	for (int i = 0; mul > 0; i++) {
		input = mul % 10;
		N[input] += 1;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++) printf("%d\n", N[i]);
}