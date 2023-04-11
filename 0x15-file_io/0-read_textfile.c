#include "main.h"

/**
 * read_textfile - function reads a text file and prints it to the POSIX STDOUT
 *
 * @filename: text file to be read
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print (b)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t y, a, b;
	char *c;

	y = open(filename, O_RDONLY);
	if (y == -1)
	{
		return (0);
	}

	c = malloc(sizeof(char) * letters);
	a = read(y, c, letters);
	b = write(STDOUT_FILENO, c, a);

	free(c);
	close(y);

	return (b);
}
