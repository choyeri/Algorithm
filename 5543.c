#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a, b, c, cola, saida;
	int min_burger, min_beverage;
	scanf("%d %d %d %d %d", &a, &b, &c, &cola, &saida);

	min_burger = (a < b) ? a : b;
	min_burger = (min_burger < c) ? min_burger : c;

	min_beverage = (cola < saida) ? cola : saida;
	printf("%d", min_burger + min_beverage - 50);
}