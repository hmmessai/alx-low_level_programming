#include "main.h"
/**
 *main - multiplies two numbers
 *@argc: arguments count
 *@argv: array of arguments used
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int result;
	int __attribute__((__unused__)) num1;
	int __attribute__((__unused__)) num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
