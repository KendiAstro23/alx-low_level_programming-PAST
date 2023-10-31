#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *constr;
	int x, yl;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	x = yl = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[yl] != '\0')
		yl++;
	constr = malloc(sizeof(char) * (x + yl + 1));
	if (constr == NULL)
		return (NULL);
	x = yl = 0;
	while (s1[x] != '\0')
	{
		constr[x] = s1[x];
		x++;
	}
	while (s2[yl] != '\0')
	{
		constr[x] = s2[yl];
		x++, yl++;
	}
	constr[x] = '\0';
	return (constr);
}


