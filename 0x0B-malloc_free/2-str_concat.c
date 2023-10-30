#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer on success, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *constr;
	int x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	x = y = 0;

	while (s1[x] != '\0')
		x++;
	{
		while (s2[y] != '\0')
			y++;
	}
	constr = malloc(sizeof(char) * (x + y + 1));
			if (constr == NULL)
			return (NULL);

			x = y = 0;

			while (s1[x] != '\0')
			{
				constr[x] = s1[x];
				x++;
			}
			while (s2[y] != '\0')
			{
				constr[y] = s2[y];
				x++, y++;
			}
			constr[x] = '\0';
			return (constr);
}


