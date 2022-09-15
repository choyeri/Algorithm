#include <stdio.h>
#include <string.h>

int main()
{
	char word[100], alphabet[26];
	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	}
	scanf("%s", word);
	for (int i = 97; i < 123; i++) {
		int j = 0;
		while (word[j] != 0) {
			if (word[j] == (char)i) {
				alphabet[i - 97] = j;
				break;
			}
			j++;
		}
	}
	for(int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]);
	}
}