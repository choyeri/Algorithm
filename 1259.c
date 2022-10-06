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
펠린드롬수 찾는 알고리즘
- 무의미한 0은 앞에 올 수 없고 1~99999사이의 수가 입력됨
- 0이 입력되면 종료

문자열배열을 만들어 입력받고, check변수를 사용하여 펠린드롬 확인
*/