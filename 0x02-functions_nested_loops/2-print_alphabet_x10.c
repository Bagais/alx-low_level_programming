#include "main.h"

/**
 * print_alphabet_x10 - check description
 * Description: print alphabet in lowercase 10 times
 * Retunr: Nothing.
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}

}
