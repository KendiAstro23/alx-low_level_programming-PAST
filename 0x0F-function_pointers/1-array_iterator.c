#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function to give a parameter
 * on each element of an array
 * @array: The array to implement on
 * @size: The parameter
 * @action: pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

