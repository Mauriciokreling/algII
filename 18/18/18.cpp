// 18.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int lernumero()
{
	int num;
	printf("Informe um numero inteiro entre 2 e 20: ");
	scanf_s("%i", &num);

	while (num < 2 || num > 20)
	{
		printf("Informe um numero entre 2 e 20: ");
		scanf_s("%i", &num);
	}
	return num;
}
int main()
{
	int n = lernumero();

	for (int i = 1; i < n; i++) //mostrsr as linhas 
	{
		for (int a = 1; a <=i; a++)//mostrar os numeros
		{
			printf("%i", a);
		}
		printf("\n");
	}

	for(int x = n - 1; x > 0; x--) 
	{
		for(int l = 1; l <= x; l++) 
		{
			printf("%i", l);
		}
		printf("\n");
	}
	system("pause");
    return 0;
}

