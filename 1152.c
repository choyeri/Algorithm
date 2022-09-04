#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	char str[1000001]; //문자열의 길이가 1000000가 최대이니 \0까지 포함하여 1000001
	int count = 0;
	scanf("%[^\n]s", &str);

	if (str[0] != ' ') count++;
	for (int i = 1; i < strlen(str); i++) {
		if (str[i] != ' '&&str[i-1] == ' ') count++; //문자열의 시작과 끝이 공백일 수 있으니 앞은 공백이고 뒤에 문자가 있을때만 count +1
	}

	printf("%d",count);
}