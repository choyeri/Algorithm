#include <stdio.h>

int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%.9f", a / b);
}

/*
double �Ҽ����Ʒ� 15�ڸ�
float  �Ҽ����Ʒ� 6�ڸ�
������� Ȥ�� �������� 10^(-9)���Ϸ� �������� double�� ���ִ� ���� ����
*/