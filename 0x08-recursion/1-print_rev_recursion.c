#include "main.h"

/**
 * _print_rev_recursion - entry point;
 * @s: input
 * Return 0 (success)
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);

	else
	{
		return;
		putchar('\n');
		putchar(*s);
	}
}
int main()
{
	_print_rev_recursion("\nTalk is cheap.Show me the code.");

	return 0;
}
