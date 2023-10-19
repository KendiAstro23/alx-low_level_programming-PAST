#include "main.h"
/**
 * _strcmp - function that compares two string values
 * @a: The first string value
 * @b: The second string value
 *
 * Return: a[i] - b[i]
 */


int _strcmp(char *a, char *b)
{
	int i;

	i = 0;
	while (a[i] != '\0' && b[i] != '\0')
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);
}

