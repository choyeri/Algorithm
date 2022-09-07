#include <stdio.h>

int main()
{
	int N[9],max=0,index;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &N[i]);
		if (max < N[i]) {
			max = N[i];
			index = i + 1;
		}
	}
		printf("%d\n%d", max, index);
}