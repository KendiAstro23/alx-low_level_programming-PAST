#include "main.h"

/**
 * _isalpa - checks for alphabetic characters
 * @c: The character to be checked
 * Return: 1 for alphabetic character and 0 for anything else
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
