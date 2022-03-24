#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
char alphabet;

for (alphabet = 122 ; alphabet >= 97; alphabet--)
{
putchar(alphabet);
}

putchar('\n');

return (0);

}
