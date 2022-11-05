#include "main.h"
/**
 *main - prints the number of arguments passed in to it
 *@argc: the argument count
 *@argv: array of arguments
 *Return: 0(success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", --argc);
	return (0);
}
