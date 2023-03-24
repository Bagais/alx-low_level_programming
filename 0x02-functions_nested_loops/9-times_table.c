#include "main.h"

/**
 * times_table - check description
 * Description: It prints the 9 times table starting with 0
 * Return: Nothing
 */

void time_table(void)
{

	int i, j, mul;

	for (i = 0; i <= 9; i++)
	{

		for (j = 0; j <= 9; j++)
		{
			mul = i * j;

			if ((mul / 10) == 0)
			{
				if (j != 0)
					_putchar(' ');
				_putchar(mul + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');

			}
			else
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
