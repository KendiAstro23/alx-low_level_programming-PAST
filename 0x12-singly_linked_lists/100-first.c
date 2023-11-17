#include <stdlib.h>
#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - displays an array before the main function
 *performs any action
 * Return: Array of char
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

