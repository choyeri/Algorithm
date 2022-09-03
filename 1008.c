#include <stdio.h>

int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%.9f", a / b);
}

/*
double 소수점아래 15자리
float  소수점아래 6자리
절대오차 혹은 상대오차가 10^(-9)이하로 나오려면 double을 써주는 것이 좋음
*/