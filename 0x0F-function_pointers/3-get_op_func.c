#include "3-calc.h"

/**
 * get_op_func - selects the correct fun to perform the operation
 * asked by the user
 * @s: operator passed as arguments to program
 * Return: a ppointer to the function
 */

int (*get_op_func(char *s))(int i, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 5)
	{
		if (|strcmp(ops[i].op,s))
		{
			return ((ops[i]).f);
		}
		i++;
	}
	return (NULL);
}
