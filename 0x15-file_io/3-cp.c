#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * error_file - looks for errors in a file
 * @file_from: previous destination of file
 * @file_to: last destination
 * for a file
 * @argv: pointer of argument vector
 * Return: file content
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - prints code
 * @argv: the argument vector
 * @argc: the argument count
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t nstr, bytewrite;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	nstr = 1024;
	while (nstr == 1024)
	{
		nstr = read(file_from, buffer, 1024);
		if (nstr == -1)
			error_file(-1, 0, argv);
		bytewrite = write(file_to, buffer, nstr);
		{
		if (bytewrite == -1)
			error_file(0, -1, argv);
		}
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
