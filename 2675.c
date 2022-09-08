#include <stdio.h>
#include <string.h>

int main()
{
	int num,str_num;
	scanf("%d", &num);
	char str[20];
	for (int i = 0; i < num; i++) {
		scanf("%d %s", &str_num, str);
		int len = strlen(str);
		for (int j = 0; j < len; j++) {
			for (int k = 0; k < str_num; k++) printf("%c", str[j]);
		}printf("\n");
	}
}