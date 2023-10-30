#include "main.h"
/**
 * _strcpy - copy a string
 * @src: where the string is copied from
 * @dest: where the string is copied to
 * Return: the copied string
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (; y < x; y++)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
