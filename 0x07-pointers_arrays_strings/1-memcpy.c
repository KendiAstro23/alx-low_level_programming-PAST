#include "main.h"

/**
 * _memcpy- this function will copy memory data
 * @n : The number of bytes to be copied from the memory area
 * @dest : The output memory area
 * @src : memory area
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
