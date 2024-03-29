#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory with malloc
 * @b: unsigned int
 *
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
