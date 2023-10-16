#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the value of a and b
 * @a: The integer to be swapped with b
 * @b: The integer to be swapped with a
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
