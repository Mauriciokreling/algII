// 29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	int x, y, z;
	printf("Informe o valor da base do triangulo: ");
	scanf_s("%i", &x);

	printf("Informe o valor da coluna do triangulo: ");
	scanf_s("%i", &y);

	printf("Informe o valor da coluna do triangulo: ");
	scanf_s("%i", &z);

	while (x > y + z || y > x + z || z > x + y)
	{
		printf("o comprimento de cada lado de um triangulo eh menor do que a soma dos comprimentos dos outros dois lados \n");
		printf("Favor informar novos valores \n");

		printf("Informe o valor da base do triangulo: ");
		scanf_s("%i", &x);

		printf("Informe o valor da coluna do triangulo: ");
		scanf_s("%i", &y);

		printf("Informe o valor da coluna do triangulo: ");
		scanf_s("%i", &z);
	}

	if (x == z && z == y)
	{
		printf("----- TRIANGULO EQUILATERO ----- \n");
	}
	else if (y == z )
	{
		printf("----- TRIANGULO ISOSCELES ----- \n");
	}
	else if(x != z && y != z && x != y)
	{
		printf("----- TRIANGULO ESCALENO -----");
	}
	else
	{
		printf("Outro tipo de triangulo nao especificado \n");
	}
	system("pause");
    return 0;
}

