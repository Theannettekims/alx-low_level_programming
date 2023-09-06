#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _print_rev_recursion - function like puts;
 * @s: input
 * Return 0 (success)
 */

const char *errorMessage = "this is the error message.\n";
write(2,errorMessage,strlen(errorMessage));

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	else
	{
		putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
