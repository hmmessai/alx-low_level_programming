#include "main.h"
/**
 *print_array - prints n elements of an array
 *@a: the array in prospect
 *@n: the number of elements to be printed
 *Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else if(i > 0)
			printf("%d\n", a[i]);
		else
			printf("\n");
	}
}
