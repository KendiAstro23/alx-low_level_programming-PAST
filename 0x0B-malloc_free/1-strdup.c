#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Allocates space in memory containing
 * a copy of the string given as parameter
 * @str: string
 * Return: A pointer on success, NULL otherwise
 */
char *_strdup(char *str)
{
	char *n;
	int i, r = 0;

	i = 0;

	if (str == NULL)
		return (NULL);
	{
		while (str[i] != '\0')
			i++;
	}
	n = malloc(sizeof(char) * (i + 1));
	{
		if (n == NULL)
			return (NULL);
	}
	for (r = 0; str[r]; r++)
		n[r] = str[r];

	return (n);
}


