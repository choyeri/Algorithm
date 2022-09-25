#include <stdio.h>
#include <string.h>

int main()
{
	int T;
	scanf("%d", &T);
	char str[1001];
	for (int i = 0; i < T; i++) {
		scanf("%s", str);
		printf("%c%c\n", str[0], str[strlen(str)-1]);
	}
}