#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[1000001]; //���ڿ��� ���̰� 1000000�� �ִ��̴� \0���� �����Ͽ� 1000001
	int count = 0;
	scanf("%[^\n]s", &str);

	if (str[0] != ' ') count++;
	for (int i = 1; i < strlen(str); i++) {
		if (str[i] != ' '&&str[i-1] == ' ') count++; //���ڿ��� ���۰� ���� ������ �� ������ ���� �����̰� �ڿ� ���ڰ� �������� count +1
	}

	printf("%d",count);
}