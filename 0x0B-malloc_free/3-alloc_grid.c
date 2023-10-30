#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates two dimensional array of integers
 * @width: dimension
 * @height: dimension
 * Return: A pointer on success
 */
int **alloc_grid(int width, int height)
{
	int **three;

	int a, b;



	if (width <= 0 || height <= 0)

		return (NULL);



	three = malloc(sizeof(int *) * height);



	if (three == NULL)

		return (NULL);



	for (a = 0; a < height; a++)

	{

		three[a] = malloc(sizeof(int) * width);



		if (three[a] == NULL)

		{
			for (; a >= 0; a--)
				free(three[a]);
			free(three);

			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			three[a][b] = 0;
	}
	return (three);
}
