#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000001];
	int count[26] = { 0 };
	int i,cnt = 0,result,max=0;
	scanf("%s", str);
	int len = strlen(str);
	//strlen�� for���ȿ� �־����� �ð��ʰ���. strlen�� for���� �ѹ��������� ����Ǿ� �ð��ʰ��Ǿ���.
	for (i = 0; i < len; i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') count[str[i] - 65]++;
		else if (str[i] >= 'a' && str[i] <= 'z') count[str[i] - 97]++;
	}
	for (i = 0; i < 26; i++) {
		if (max < count[i]) {
			max = count[i];
			result = i;
		}
	}
	for (i = 0; i < 26; i++) {
		if (max == count[i]) cnt++;
	}
	if (cnt > 1) printf("?");
	else printf("%c", result + 'A');
}