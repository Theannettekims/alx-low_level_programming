#include <stdio.h>
#include "main.h>

/**
 * factorial - youtube c tutorial: 5 - (5 - 1)
 * @n: input
 * Return: Always 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else
	{
		return (n * factorial(n - 1));
	}
}
