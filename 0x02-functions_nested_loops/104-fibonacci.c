#include <stdio.h>
/**
 *main - print the first 98 fibonacci numbers
 *
 *Return: 0 (success)
 */
int main(void)
{
	unsigned int count = 1;
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int k;

	printf("%lu, %lu,", i, j);
	while (count <= 96)
	{
		k = i + j;
		if (count != 96)
			printf(" %lu,", k);
		else
			printf(" %lu\n", k);
		count++;
		i = j;
		j = k;
	}
	return (0);
}
