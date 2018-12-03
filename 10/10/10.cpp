#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include "stdafx.h"


int main()
{
	int cod, quant, resp;
	float result;

		printf("====TABELA DE PRODUTOS E PRECOS==== \n");
		printf("Produto 1001 custa R$:5,32 \n");
		printf("Produto 1324 custa R$:6,45 \n");
		printf("Produto 6548 custa R$:2,37 \n");
		printf("Produto 987 custa R$:5,32 \n");
		printf("Produto 7623 custa R$:6,45 \n");
		printf("informe o COD do produto: ");
		scanf_s("%i", &cod);
		printf("Informe a quantidade: ");
		scanf_s("%i", &quant);

		switch (cod)
		{

		case 1001:

			result = 5.32 * quant;
			break;

		case 1324:

			result = 6.45 * quant;
			break;

		case 6548:

			result = 2.37 * quant;
			break;

		case 987:

			result = 5.32 * quant;
			break;

		case 7623:

			result = 6.45 * quant;
			break;

		default:
			printf("Codigo invalido, digite um codigo valido \n");
			break;
		}

	printf("O valor da compra foi de R$: %.2f \n", result);
	getchar();
	return 0;
}