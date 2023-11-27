#include "main.h"
#include <stdio.h>
/**
 * append_text_to_file - function appends text
 * at the end of a file
 * @filename: input location
 * @text_content: descriptions in the
 * file
 * Return:1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int readwrite;
	int tlet;

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		for (tlet = 0; text_content[tlet]; tlet++)
		{
		readwrite = write(file, text_content, tlet);
		}
		if (readwrite == -1)
		{
			return (-1);
		}
	}
	close(file);
	if (filename == NULL)
	{
		return (-1);
	}
	return (1);
}
