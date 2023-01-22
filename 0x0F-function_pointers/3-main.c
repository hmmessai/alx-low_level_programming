#include "3-calc.h"

/**
 * main - performs calculation
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 on success
 * 1 if otherwise
 */

int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *op = argv[2];

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!get_op_func(op))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
