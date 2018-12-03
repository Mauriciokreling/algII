// 15.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>

int main()
{
	int x, n, result=0;
	printf("Informe o valor de X: ");
	scanf_s("%i", &x);

	printf("Informe o valor de N: ");
	scanf_s("%i", &n);

	result = pow(x, n);

	printf("O valor foi de: %i \n", result);

	system("pause");

    return 0;
}

