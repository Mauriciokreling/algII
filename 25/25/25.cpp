// 25.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int salbruto, saliquido, calc;
	printf("Informe o salario bruto: ");
	scanf_s("%i", &salbruto);

	calc = salbruto * 0.90;
	saliquido = calc * 0.95;

	printf("O salario liquido eh %i \n", saliquido);
    return 0;
}

