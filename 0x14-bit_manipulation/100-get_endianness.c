#include <stdio.h>
#include "main.h"
/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *endian_ptr = (char *)&check;

	if (*endian_ptr)
	{
		return (1);
	}
	return (0);
}
