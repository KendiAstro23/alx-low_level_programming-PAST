#include "main.h"
#include <stdio.h>

/**
 * main - prints the output of the function
 * @argc: the argument count
 * @argv: the argument vector
 * Return: 0 for success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

