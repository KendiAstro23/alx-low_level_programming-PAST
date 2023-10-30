#include "main.h"
/**
 * _isupper - verifies if the character is in uppercase
 * @c: The character to be verified
 *
 * Return: 1 for success, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
