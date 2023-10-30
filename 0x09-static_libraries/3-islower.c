#include "main.h"

/**
 * _islower - verifies if a letter is in lowercase
 * @c: The character to be verified
 *
 * Return: 1 for success, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
