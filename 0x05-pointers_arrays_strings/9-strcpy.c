#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: destination pointer
 * @src: source pionter
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + 1) = *(src + i);

	}
	*(dest + 1) = '\0';
	return (dest);
}
