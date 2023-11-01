#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
