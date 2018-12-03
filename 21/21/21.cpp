// 21.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int n, ns, soma=0, i;
	printf("Informe a quantidade de mumeros que serao digitados: ");
	scanf_s("%i", &n);
	for (i = 0; i < n; i++)
	{
		printf("Informe o numero: ");
		scanf_s("%i", &ns);
			if (ns % 2 == 0) 
			{
				soma = soma + ns;
			}
	}

	printf("A soma dos numeros pares foi de: %i", soma);
	system("pause");
    return 0;
}

