#include "main.h"
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */
{
	void *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
