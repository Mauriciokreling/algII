// 38.cpp : Defines the entry point for the console application.
//
#include  "stdafx.h"
#include  <stdlib.h>

struct  min
{
	int horas;
	int minutos;

};
struct  min m;

int  main()
{

	printf("Informe os minutos: ");
	scanf_s("%i", &m.minutos);



	while (m.horas > 60)
	{
		m.minutos = m.minutos + 1;
		m.horas = m.horas - 60;
	}

	while (m.minutos > 60)
	{
		m.horas = m.horas + 1;
		m.minutos = m.minutos - 60;
	}

	printf("Os minutos informados foram transformados em: %i horas, %i minutos. \n", m.horas, m.minutos);

	system("pause");
	return  0;
}