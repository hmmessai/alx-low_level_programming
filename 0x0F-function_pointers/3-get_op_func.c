#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform
 * @s: the character to choose operation will be based on
 * Return: the pointer to the correct function to perform
 */

int (*get_op_func(char *s))(int, int)
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

	while(ops[i].op)
	{
		if (!strcmp(s, ops[i].op))
			return (ops[i].f);
		i++;
	}

	return (0);
}
