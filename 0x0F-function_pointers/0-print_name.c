#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints out a name
 * @name: the name to be printed out
 * @f: the function
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
