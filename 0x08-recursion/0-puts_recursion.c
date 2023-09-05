#include <stdio.h>
#include <unistd.h>
#include "main.h"

/**
 * _puts_recursion - function like puts;
 *@s: input
 *Return 0 (success)
 */

void _putchar(char c){
	write(1,&c,1);
}

void _puts_recursion(char *s){
	if (*s=='\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
int main(){
	char str[]="Talk is cheap.Show me the code";
	_puts_recursion(str);

	return 0;
}
