// 22.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int mat[3][3], t[3][3], l, c;
	printf("Preenchendo a matriz: \n");
	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("Informe o valor da linha %i e da coluna %", l, c);
			scanf_s("%i", &mat[l][c]);
		}
	}

	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++)
		{
			t[c][l] = mat[l][c];
		}
	}

	for (l = 0; l < 3; l++)
	{
		for (c = 0; c < 3; c++)
		{
			printf("%i \t", t[l][c]);
		}
		printf("\n");
	}


	//printf("");
	system("pause");
	return 0;
}
