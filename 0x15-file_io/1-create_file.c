#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, lenth_text, content;

	lenth_text = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[lenth_text] != '\0')
		{
			lenth_text++;
		}
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	content = write(file, text_content, lenth_text);

	if (file == -1)
	{
		return (-1);
	}

	if (content == -1)
	{
		return (-1);
	}

	close(file);

	return (1);
}
