#include <unistd.h>
/**
 * main - main function prints putchar
 * stored in the file putchar
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

