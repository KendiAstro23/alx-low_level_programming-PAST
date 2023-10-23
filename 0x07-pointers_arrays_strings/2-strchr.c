#include "main.h"

/**
 * _strchr - This function locates a character in a string
 * @c: character to be located
 * @s: string where the character will be located from
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
