#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function like puts;
 * @s: input
 * Return 0 (success)
 */

int _strlen_recursion(char *s)
{
	if (*s >= '\0' && *s == '\0')
		return;
	else
	{
		putchar('\n');
		_strlen_recursion(s + 1);
	}
}
