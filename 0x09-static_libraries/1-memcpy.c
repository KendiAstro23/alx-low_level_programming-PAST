#include "main.h"

/**
 * _memcpy - copy a memory area to a new destination
 * @dest: the new area where the memory is stored
 * @src: the initial memory area
 * @n: the number of bytes
 *
 * Return: copied memory in new destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
