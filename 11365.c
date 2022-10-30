#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char sentence[501];
	while (1) {
		gets(sentence);
		if (sentence[0] == 'E' && sentence[1] == 'N' && sentence[2] == 'D')
			break;
		int len = strlen(sentence);
		for (int i = len; i > 0; i--) {
			printf("%c", sentence[i - 1]);
		}
		printf("\n");
	}
}