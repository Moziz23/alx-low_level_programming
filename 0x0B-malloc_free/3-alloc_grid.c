#include "main.h"
#include <stdlib.h>


/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */

int **alloc_grid(int width, int height)
{
	int **mos;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	mos = malloc(sizeof(int *) * height);

	if (mos == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		mos[x] = malloc(sizeof(int) * width);

		if (mos[x] == NULL)
		{
			for (; x >= 0; x--)
				free(mos[x]);

			free(mos);

			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			mos[x][y] = 0;
	}

	return (mos);
}
