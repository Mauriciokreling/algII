# include  "stdafx.h"
# include  <stdlib.h>

float pi = 3.14;
int  main() 
{
	float raio, area;
	printf("Entrar no Raio da Circunferencia: ");
	scanf_s("%f", &raio);

	area = pi * (raio * raio);

	printf("A area da Circunferencia eh: %.2f \n", area);

	system("pause");
	return  0;
}