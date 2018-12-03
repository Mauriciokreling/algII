// 5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>

int main()
{
	float carro, imp, fab, dist;
	printf("Informe o valor pago no veiculo: ");
	scanf_s("%f", &carro);
	fab = carro * 0.72;
	fab = fab * 0.55;
	printf("O custo de fabrica do veiculo eh de: %.2f \n", fab);
	system("pause");
    return 0;
}

