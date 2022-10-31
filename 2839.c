#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
2839 설탕배달
- N을 3이나 5로 나누었을때 최소 몫(한개의 N에 3과 5 모두 사용 가능)
- 나눌 수 없다면 -1 출력
*/
int main()
{
	int N;
	int count = 0;
	scanf("%d", &N);
	while (1) {
		if (N % 5 == 0) {
			count += N / 5;
			break;
		}
		N -= 3;
		count++;
		if (N < 0) break;
	}
	if (N < 0) printf("-1");
	else printf("%d", count);
}