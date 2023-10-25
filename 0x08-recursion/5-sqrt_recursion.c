#include "main.h"
#include <stdio.h>

/**
 * find_sqrt - finds the square root of n
 * _sqrt_recursion - returns the natural square root of n
 *
 * @n: The output number
 * @r: input number
 *
 * Return: 0 success
 */
int find_sqrt(int n, int r)
{
	if (r * r == n)
	{
		return (r);
	}
	else if (r * r > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, r  + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: The square number
 * Return: 0 success
 */
int _sqrt_recursion(int n)
{
	if (n < '\0')
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (find_sqrt(n, 1));
	}
}

