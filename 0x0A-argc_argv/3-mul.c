#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _atoi - function converts string to integer
 * @s: string to be converted
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int x, y, z, n, len, digit;

	x = 0;
	y = 0;
	z = 0;
	n = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (x < len && n == 0)
	{
		if (s[x] == '-')
			++y;
		if (s[x] >= '0' && s[x] <= '9')
		{
			digit = s[x] - '0';
			if (y % 2)
				digit = -digit;
			z = z * 10 + digit;
			n = 1;

			if (s[x + 1] < '0' || s[x + 1] > '9')
				break;
			n = 0;
		}
		x++;
	}
	if (n == 0)
		return (0);
	return (z);
}


/**
 * main - prints the result of the multiplication
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int result, n1 = 0, n2 = 0;

	if (argc == 3)
	{
		n1 = _atoi(argv[1]);
		n2 = _atoi(argv[2]);
		result = n1 * n2;

		printf("%d\n", result);
	}
	else
	{
		printf("Error.\n");
	return (1);
	}
	return (0);
}
