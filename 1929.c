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
//} �ð� �ʰ� - �ð����⵵ : O(n)�� ������ �ڵ� => M���� N���� ��� ���ڸ� ������� �Ҽ��� ����

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