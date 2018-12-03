// 27.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


int main()
{
	int compra, troco, valor, cem=0, dez=0, um=0;
	printf("Informe o valor da compra R$: ");
	scanf_s("%i", &compra);

	printf("Informe o valor recebido R$: ");
	scanf_s("%i", &valor);

	troco = valor - compra;

	printf("O troco deve ser de R$: %i \n", troco);

	while (troco>=100)
	{
		cem += 1; //'+=' = cem =cem + 1
		troco = troco - 100;
	}
	while (troco >= 10)
	{
		dez += 1; //'+=' = cem =cem + 1
		troco = troco - 10;
	}
	while (troco >= 1)
	{
		um += 1; //'+=' = cem =cem + 1
		troco = troco - 1;
	}

	printf("Deve ser devolvido %i notas de 100 \n", cem);
	printf("Deve ser devolvido %i notas de 10 \n", dez);
	printf("Deve ser devolvido %i notas de 1 \n", um);
    return 0;
}

