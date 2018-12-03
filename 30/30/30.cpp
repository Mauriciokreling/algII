// 30.cpp : Defines the entry point for the console application.
//

#include <stdafx.h>
#include <stdlib.h>

int  main()
{
	int n, i;
	printf("digite um numero entre 2 e 20: ");
	scanf_s("%i", &n);

	while (n < 2 || n> 20)
	{
		printf("numero invalido. Tente novamente! ");
		printf("digite um numero entre 2 e 20: ");
		scanf_s("%i", &n);
	}



	for (i = 0; i < n; i++)
	{

		printf("%i", i + 1);
	}
	n--;
	if (n > 0)
	{
		printf("\n X");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}

	if (n > 0)
	{
		printf("\n XXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXXXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXXXXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}
	if (n > 0)
	{
		printf("\n XXXXXXXXXXXXXXXXXXX");
		for (i = 0; i < n; i++)
		{

			printf("%i", i + 1);
		}
		n--;
	}

	system("pause");
	return 0;
}

