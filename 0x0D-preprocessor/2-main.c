#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * 
 * Return: 0 if successful
 */

int main(void)
{
	print("%s", __FILE__);

	return (0);
}