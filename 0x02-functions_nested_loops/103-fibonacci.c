#include <stdio.h>
/**
 *main - prints the sum of even fibonacci numbers
 *
 *Return: 0 (success)
 */
int main(void)
{
	unsigned long int i = 1;
	unsigned long int j = 2;
	unsigned long int k = 0;
	unsigned long int sum = j;

	while (k < 4000000)
	{
		k = i + j;
		if (k % 2 == 0)
			sum += k;
		i = j;
		j = k;
	}
	printf("%lu\n", sum);
	return (0);
}
