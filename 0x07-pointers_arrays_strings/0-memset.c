#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @n: The number of bytes to be changed
 * @b: The desired byte constant
 * @s: The starting address of the memory to be filled with a byte constant
 * Return: New value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
