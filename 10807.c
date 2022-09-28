#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int N, v;
	scanf("%d", &N);
	int num[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &v);
	int cnt = 0;
	for (int i = 0; i < N; i++) {
		if (v == num[i]) cnt++;
	}
	printf("%d", cnt);
}