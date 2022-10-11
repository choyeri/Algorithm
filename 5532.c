#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int max(int A, int B) {
	if (A > B)
		return A;
	else
		return B;
}

int main()
{
	int L, A, B, C, D;
	scanf("%d %d %d %d %d", &L, &A, &B, &C, &D);
	int date1, date2;

	date1 = A / C;
	date2 = B / D;

	if (A % C != 0)
		date1++;
	if (B % D != 0)
		date2++;
	
	printf("%d\n",L- max(date1, date2));
}