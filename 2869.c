#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
2869 달팽이는 올라가고싶다
높이가 V미터인 나무막대를 낮에는 A미터 올라가고 밤에는 B미터 내려온다.
V미터를 모두 올라갔다면 내려오지 않는다.

즉, 마지막 밤에 총 올라간 높이는 V-B이고 마지막 낮에 A미터를 올라가면 높이 V미터를 모두 올라간다.
마지막 밤까지 달팽이는 하루에 A-B미터 올라간다.
세울 수 있는 수식은 (V-B)/(A-B)이고 이 나눗셈에 나머지가 0이 아니라면 저 수식에서 +1을 한다. 
*/

//int main()
//{
//	int A, B, V,cnt=0;
//	scanf("%d %d %d", &A, &B, &V);
//	while (V >= 0) {
//		if (V - A == 0) {
//			cnt++;
//			break;
//		}
//		V = V - A + B;
//		cnt++;
//	}
//	printf("%d", cnt);
//} 시간초과

int main()
{
	int A, B, V;
	scanf("%d %d %d", &A, &B, &V);
	if ((V - B) % (A - B) == 0)
		printf("%d", (V - B) / (A - B));
	else
		printf("%d", (V - B) / (A - B) + 1);
}