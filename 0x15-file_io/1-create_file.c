#include "main.h"
#include <stdio.h>

/**
 * create_file - generates a file
 * @filename: input location for the file's name
 * @text_content: conditions that have been inserted
 * in the file
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	int readwrite;
	int tlet;

	if (!filename)
	{
		return (-1);
	}
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
	{
		return (-1);
	}
	if (!text_content)
	{
		text_content = "";
	}
	for (tlet = 0; text_content[tlet]; tlet++)

	readwrite = write(file, text_content, tlet);

	if (readwrite == -1)
	{
		return (-1);
	}
	close(file);
	{
		return (1);
	}
}
