#include <stdio.h>

int main()
{
	int attendance[30] = { 0 };
	int num;
	for (int i = 0; i < 30; i++) {
		scanf("%d", &num);
		attendance[num-1] = 1;
	}
	for (int i = 0; i < 30; i++) {
		if (attendance[i] == 0)
			printf("%d\n", i+1);
	}
}