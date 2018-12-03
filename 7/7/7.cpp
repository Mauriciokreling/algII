// 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
int main()
{
	int n1, n2, result;
	n1 = 0;
	n2 = 0;
	printf("informe um numero inteiro");
	scanf_s("%i", &n1);

	printf("informe um numero inteiro");
	scanf_s("%i", &n2);

	if (n1 <n2)
	{
		if (n2% n1 == 0)
		{
			printf("%i eh multiplo de %i. ", n1, n2);
		}
		else
		{
			printf("%i nao eh multiplo de %i. " , n1, n2);
		}
	}
	else
	{
		if (n1 % n2 == 0)
		{
			printf("%i eh multiplo de %i. " , n2, n1);
		}
		else
	{
		printf("%i nao eh multiplo de %i. " , n2, n1);
	}
	}
	system("pause");
	return 0;
}