#include "main.h"

/**
 * _memset - assigns a value to a block of memory
 * @b: The desired outcome
 *
 * @n: Number of bytes
 * @s: The initial address of the block of memory
 * Return: b for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}

