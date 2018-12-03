// 20.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int mat[3][3], i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j - 3; j++) {
			printf("Informe a linha: %i e a coluna %i: ", i + 1, j + 1);
			scanf_s("%i", &mat[i][j]);
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j - 3; j++) {
			if (mat[i][j] < 0) {
				mat[i][j] = mat[i][j] * -1;

			}
		}
	}

	for (i = 0; i < 3; i++) {
		for (j = 0; j - 3; j++) {
			printf("%i \t", mat[i][j]);
			

			}
		printf("\n");
		}


	system("pause");
    return 0;
}

