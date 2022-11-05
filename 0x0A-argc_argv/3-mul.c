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
	int num1;
	int num2;

	if (argc != 3)
	{
		printf("Error");
		return (1);
	}
	num1 = argv[1] - 48;
	num2 = argv[2] - 48;
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
