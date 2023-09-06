#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _puts_recursion - function like puts;
 *@s: input
 *Return 0 (success)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		putchar('\n');
	else
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
}

