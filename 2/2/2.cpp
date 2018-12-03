// 2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include <math.h>
/*float valor()
{
	int num = 0;
	printf("informe um valor: ");
	scanf_s("%i", &valor);
	return num;
}

float soma()
{
	float a = valor();
	float b = valor();
	float c = valor();
	float r, s, w;
	r = a + b;
	r = pow(r, 2);
	s = b + c; 
	s = pow(s, 2);
	w = (r + s) / 2;
	return w;

}*/

int main()
{
	int a, b, c, d, r, s;
	printf("Informe o valor de A: ");
	scanf_s("%i", &a);
	printf("Informe o valor de B: ");
	scanf_s("%i", &b);
	printf("Informe o valor de C: ");
	scanf_s("%i", &c);

	r = a + b;
	r = pow(r, 2);
	s = b + c;
	s = pow(s, 2);
	d = (r + s) / 2;

	printf("O valor de D foi de: %.2i", d);
	system("pause");
    return 0;
}

