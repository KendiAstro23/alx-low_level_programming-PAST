#include "main.h"

/**
 * _strlen_recursion - get string length
 * @s: string
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compares string characters
 * @s: string
 * @i: first iterator
 * @j: second iterator
 * Return: integer
 */
int compare_string(char *s, int i, int j)
{
if (*(s + i) == *(s + j))
{
if (i == j || i == j + 1)
return (1);
return (0 + compare_string(s, i + 1, j - 1));
}
return (0);
}

/**
 * is_palindrome - detects if s is a palindrome
 * @s: string that is being tested
 * Return: 1 if it is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}



