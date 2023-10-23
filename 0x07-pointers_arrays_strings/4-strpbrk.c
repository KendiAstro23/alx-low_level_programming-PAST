#include "main.h"

/**
 * _strpbrk - function that locates the first occurence in the string s
 * of any of the bytes in the string accept
 * @s: string
 * @accept: string
 * Return: a pointer to the byte in s
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}
	return ('\0');
}

