#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - check description
 * @n: natural number
 * Description: Print all natural numbers from n to 98
 * Return: Nothing
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{

		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i == 98)
				continue;
			printf(",");

		}
		printf("\n");

	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i ==98)
				continue;
			printf(",");

		}
		printf("\n");
	}
	else
		printf("%d\n", n);

}
