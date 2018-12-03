// 26.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	int idade, dias;
	printf("Informe a sua idade:");
	scanf_s("%i", &idade);
	dias = idade * 30 * 12;

	printf("Voce ja viveu %i dias", dias);
    return 0;
}

