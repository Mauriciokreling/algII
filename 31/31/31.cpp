// 31.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	int a[5], i=0;
	for (i = 0; i < 5; i++) 
	{
		printf("Informe os valores do vetor na posicao %i: ", i + 1);
		scanf_s("%i", &a[i]);
	}

	for (i = 0; i < 5; i++) 
	{
		if (a[i] < 0) 
		{
			printf("Os numeros negativos digitados foram %i \n", a[i]);
		}
	}
	system("pause");
    return 0;
}

