// 3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int anon, ano, idade, mes, dias;
	printf("Informe o ano que voce esta? ");
	scanf_s("%i", &ano);

	printf("Informe o ano do seu nascimento? ");
	scanf_s("%i", &anon);
	idade = ano - anon;
	mes = idade * 12;
	dias = idade * 360;
	printf(" Voce ja viveu %i anos \n %i meses \n %i dias \n", idade, mes, dias);
	system("pause");
    return 0;
}

