#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
2839 �������
- N�� 3�̳� 5�� ���������� �ּ� ��(�Ѱ��� N�� 3�� 5 ��� ��� ����)
- ���� �� ���ٸ� -1 ���
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