// 34.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<stdlib.h>


int main()
{
	int vet[50], i = 0, maior = 0, menor = 999999999;

	for (i = 0; i < 50; i++)
	{
	printf("Informe os 50 valores do vetor");
	scanf_s("%i", &vet[i]);
		if (vet[i] < menor) {
			menor = vet[i];
		}
		if (vet[i] > maior)
		{
			maior = vet[i];
		}

	}
	printf("o menor numero encontrado foi: %i \n", menor);
	printf("o maior numero encontrado foi: %i \n", maior);
	system("pause");
	return 0;
}

