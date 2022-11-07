#include "main.h"
/**
 *alloc_grid - 2D array of intergers
 *@width: the width of the array
 *@height: the height of the array
 *Return: the pointer to the array referred
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int));
	if (arr == NULL)
	{
		fprintf(stderr, "Error in memory allocation");
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			fprintf(stderr, "Error in memory allocation");
			free(arr[i]);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
