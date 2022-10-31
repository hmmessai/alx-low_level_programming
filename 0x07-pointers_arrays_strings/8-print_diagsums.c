#include "main.h"
/**
 *print_diagsums - the sum of the two diagonals of a square matrix
 *@a: the matrix in prospect
 *@size: the size of the matrix
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int m;
	int sum1 = 0;
	int sum2 = 0;

	for (m = 0; m < (size * size); m++)
	{
		if (m % (size + 1) == 0)
			sum1 += *(a + m);
		if (m % (size - 1) == 0 && m != 0 && m != size * size - 1)
			sum2 += *(a + m);
	}
	printf("%d, %d\n", sum1, sum2);
}
