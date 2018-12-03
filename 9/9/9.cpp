// 9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{

	float n1, n2, n3, resp, a, p, h;
	int op;

	printf("Informe o primeiro numero positivo e inteiro: ");
	scanf_s("%f", &n1);

	printf("Informe o segundo numero positivo e inteiro: ");
	scanf_s("%f", &n2);


	printf("Informe o terceiro numero positivo e inteiro: ");
	scanf_s("%f", &n3);


	printf("1-Aritmetica \n");
	printf("2-Ponderada (valores: 3, 3, 4) \n");
	printf("3-Harmonica \n");
	printf("4-Sair \n");
	printf("QUAL OPRRACAO VOCE DESEJA REALIZAR? ");
	scanf_s("%i", &op);

	switch (op)
	{
	case 1:
		a = (n1 + n2 + n3) / 3;
			printf("Media aritmetica: %.2f \n", a);
			break;
	case 2:
		p = ((n1 * 3) + (n2 * 3) + (n3 * 4) / (3 + 3 + 4));
		printf("Media ponderada: %.2f \n", p);
		break;
	case 3:
		h = 3 / ((1 / n1) + (1 / n2) + (1 / n3));
		printf("Media harmonica: %.2f \n", h);
		break;
	default:
		printf("informe valores validos");
		break;
	}
	system("pause");
    return 0;
}

