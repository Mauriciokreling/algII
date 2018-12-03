// 28.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int sal = 1000, sal_final, carros, vendas;

	printf("Quantos carros voce vendeu? ");
	scanf_s("%i", &carros);
	carros = carros + 50;

	printf("Informe o valor das vendas R$: ");
	scanf_s("%i", &vendas);

	vendas = vendas * 0.95;

	sal_final = sal + carros + vendas;

	printf("O valor final do salario foi de R$: %i", sal_final);
    return 0;
}

