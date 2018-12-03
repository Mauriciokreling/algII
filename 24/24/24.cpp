// 24.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int a, b, troca;
	printf("Informe o valor de A: ");
	scanf_s("%i", &a);

	printf("Informe o valor de B: ");
	scanf_s("%i", &b);

	printf("Valor de A = %i \n", a);
	printf("Valor de B = %i \n", b);
	troca = b;
	b = a;
	a = troca;
	printf("Novo valor de A = %i \n", a);
	printf("Novo valor de B = %i \n", b);
	system("pause");
    return 0;
}

