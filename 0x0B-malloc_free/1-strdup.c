#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns copy of a string
 * @str: string
 *
 * Return: success, pointer to the string, else NULL
 */

char *_strdup(char *str)
{
	unsigned int len, i;
	char *sdup;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	sdup = malloc(sizeof(char) * (len + 1));

	if (sdup == NULL)
		return (NULL);
	while ((sdup[i] = str[i]) != '\0')
		i++;

	return (sdup);
}
