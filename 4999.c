#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char jh[1001], doctor[1001];

	scanf("%s", jh);
	scanf("%s", doctor);

	if (strlen(jh) >= strlen(doctor))
		printf("go");
	else
		printf("no");
}