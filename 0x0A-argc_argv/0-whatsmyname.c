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
	if (argc > 0)
		printf("%s\n", *argv);
	else
		printf("Program name not indicated.\n");
	return (0);
}

