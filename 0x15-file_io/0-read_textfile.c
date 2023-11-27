#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints
 * it to POSIX
 * @filename: placeholder address
 * @letters: input
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
	{
		return (0);
	}
	bytesRead = read(file, buffer, letters);
	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	close(file);
	free(buffer);
	{
	return (bytesWritten);
	}
}
