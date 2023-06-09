#include <unistd.h>

/**
 * _putchar - writes character c to the stdout
 * @c: the character
 *
 * Return: on success, 1
 * On error, return -1 and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
