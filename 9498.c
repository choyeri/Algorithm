#include <stdio.h>

int main()
{
	int testscore;
	
	scanf("%d", &testscore);
	if (testscore >= 90) printf("A");
	else if (testscore >= 80) printf("B");
	else if (testscore >= 70) printf("C");
	else if (testscore >= 60) printf("D");
	else printf("F");
}