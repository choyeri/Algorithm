#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main()
//{
//	int M, N;
//	scanf("%d %d", &M, &N);
//	for (int i = M; i <= N; i++) {
//		for (int j = 2; j <= i; j++) {
//			if (j == i)
//				printf("%d\n", i);
//			if (i % j == 0)
//				break;
//		}
//	}
//} 시간 초과 - 시간복잡도 : O(n)이 나오는 코드 => M부터 N까지 모든 숫자를 나누어보고 소수를 구함

#define size 1000001

int main()
{
	int M, N;
	scanf("%d %d", &M, &N);
	int primenum[size] = { 0 };
	primenum[0] = 1; primenum[1] = 1;
	for (int i = 0; i < N; i++) {
		if (primenum[i] == 1)
			continue;
		else {
			for (int j = 2; i * j <= N; j++)
				primenum[i * j] = 1;
		}
	}
	for (int i = M; i <= N; i++) {
		if (primenum[i] == 0)
			printf("%d\n", i);
	}
}