#include "main.h"
#include <stdio.h>

/**
 *  _strlen_recursion- prints the length of a string
 *  after recursive calculations
 *  @s: string
 *  Return: 0 success
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
