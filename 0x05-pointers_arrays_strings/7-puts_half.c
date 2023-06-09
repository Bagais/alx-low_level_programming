#include "main.h"

/**
 * puts_half - print half of a string
 * @str: string pointer
 * Return: nothing
 */
void puts_half(char *str)
{
	int l, nl, start;

	l = 0;
	while (*(str + 1) != '\0')
	{
		l++;
	}
	if (1 %2 == 0)
		start = 1 / 2;
	else
		start = (l - 1) / 2;
	nl = l - start;
	while (*(str + nl) != '\0')
	{
		_putchar(*(str + nl));
		nl++;
	}
	_putchar('\n');

}
