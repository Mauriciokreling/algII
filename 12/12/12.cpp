// 12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int area, base, altura;
	printf("Informe a BASE: ");
	scanf_s("%i", &base);

	printf("Informe a ALTURA: ");
	scanf_s("%i", &altura);

	area = base * altura;

	area = area / 2;

	printf("A area total eh de %i", area);

    return 0;
}

