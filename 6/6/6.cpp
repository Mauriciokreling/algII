// 6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	int result=0, n, soma=0;

	printf("Insina o numero positivo e inteiro: ");
	scanf_s("%i", &n);

	while (soma <= n) 
	{
		result = result + soma;
			soma++;
	}

	printf("A soma dos numeros foram %i \n", result);
	system("pause");
    return 0;
}

