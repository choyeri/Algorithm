#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	char word[101];
	int alphabet[26] = { 0 };
	scanf("%s", word);
	int len = strlen(word);
	for (int i = 0; i < len; i++) {
		alphabet[word[i] - 97]++;
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", alphabet[i]);
}