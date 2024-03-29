#include "search_algos.h"
/**
 * linear_search - Searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: first index of where value is located
 *	   or -1 if failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	/*int lastelement = size;*/

	if (!array)
		return (-1);


	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}

	return (-1);
}
