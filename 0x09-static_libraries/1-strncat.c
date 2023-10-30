#include "main.h"

/**
 * _strncat - concatenates two strings
 * @n: number of bytes from src
 * @src: source of string
 * @dest: destination of string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x;
	x = 0;
	int y;
	y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
