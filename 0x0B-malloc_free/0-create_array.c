#include <stdlib.h>
#include "main.h"

/**
 * create_array - create an array of characters
 * @size: size of array
 * @c: character
 *
 * Return: Pointer to array on success, else NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);
	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
