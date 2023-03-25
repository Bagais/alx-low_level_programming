#include <stdio.h>
#include "main.h"

/**
 * main - print biggest prime factor of a number
 *
 * Return: 0 (success)
 */

int main(void)
{
	long int number;

	number = 612852475143;

	if (isPrime(number) == 1)
	{
		printf("%ld\n", number);
	}
	else
	{
		printf("%ld\n", biggestFactor(number));
	}
	return (0);
}

/**
 * isPrime - check if number is prime
 * @n: number
 * Return: if prime, true. Else, false
 */

int isPrime(long int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		for (i = 2; i < n; i++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
	return (1);
	}
}

/**
 * biggestFactor - return the largest prime factor of a number
 * @: number
 * Return: biggest factor
 */

long int biggestFactor(long int a)
{
	long int i;

	for (i = 2; i <= a; i++)
	{
		if (isPrime(a) == 1)
		{
			break;
		}
		else
		{
			if ((a % i == 0) && (isPrime(i) == i))
			{
				a = a / i;
				continue;
			}
			else
			{
				a = a;
			}
		}
	}
	return (a);
}
