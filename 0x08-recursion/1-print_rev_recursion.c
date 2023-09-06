#include <stdio.h>
#include "main.h"

/**
 * _print_rev_recursion - function like puts;
 * @s: input
 * Return 0 (success)
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	else
	{
		putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
