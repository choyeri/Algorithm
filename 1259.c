#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char num[100000] = { 0 };
	while (scanf("%s", num)&&num[0] != '0') {
		int len = strlen(num);
		int check = 1;
		for (int i = 0; i < len/2; i++) {
			if (num[i] != num[len - 1 - i]) {
				check = 0;
				break;
			}
		}
		if (check == 1)
			printf("yes\n");
		else
			printf("no\n");
	}
}
/*
�縰��Ҽ� ã�� �˰���
- ���ǹ��� 0�� �տ� �� �� ���� 1~99999������ ���� �Էµ�
- 0�� �ԷµǸ� ����

���ڿ��迭�� ����� �Է¹ް�, check������ ����Ͽ� �縰��� Ȯ��
*/