#include <stdio.h>
#include "main.h"

/**
 * print_array - print elements of array
 * @a: integer pointer
 * @n: input integer
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n -1)
			printf(", ");
	}
	printf("\n");
}
