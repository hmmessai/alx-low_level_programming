#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array of ints.
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: the value to search for
 * Return: index where the value is located
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0;
	int R = size - 1;
	int m;
	int i;

	if (!array)
		return (-1);

	while (L <= R)
	{
		m = floor((L + R) / 2);
		printf("Searching in array: ");

		for (i = L; i <= R; i++)
		{
			if (i == R)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);

		}

		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
