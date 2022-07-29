#include "main.h"
/**
 * malloc_checked - allocates memory
 * @b: n.o of bytes
 * Return: return a void ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}


	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (ptr);
