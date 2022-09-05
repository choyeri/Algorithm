#include <stdio.h>
#include <string.h>

int main()
{
	char str[1000001];
	int count[26] = { 0 };
	int i,cnt = 0,result,max=0;
	scanf("%s", str);
	int len = strlen(str);
	//strlen을 for문안에 넣었을때 시간초과됨. strlen이 for문을 한번돌때마다 실행되어 시간초과되었음.
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