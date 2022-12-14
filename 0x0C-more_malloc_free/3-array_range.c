#include "main.h"
/**
 *array_range - creates an array of integers
 *@min: minimum integer
 *@max: maximum integer
 *Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	if (size < 0)
		size = -size;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
