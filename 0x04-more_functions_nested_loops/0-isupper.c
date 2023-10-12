#include "main.h"

/**
 * _isupper - check if a letter is upper
 * @x: The letter to be checked by previous command
 * Return: 1 for upper number or 0 for anything else
 */

int _isupper(int x)

{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
