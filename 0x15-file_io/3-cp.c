#include "main.h"

void closed(int fd_value);
char *cre_buf(char *file_from);

/**
 * closed - function to close file descriptor
 *
 * @fd_value: file descriptor
 *
 * Return: void
 */

void closed(int fd_value)
{
	int i;

	i = close(fd_value);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
		exit(100);
	}
}



/**
 * cre_buf - allocates 1024 bytes of memory to a buffer
 *
 * @file_from: the name of the file from which characters are read
 *
 * Return: pointer to the buffer of 1024 bytes
 */

char *cre_buf(char *file_from)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_from);
		exit(99);
	}

	return (buf);
}



/**
 * main - program that copies the content of a file to another file
 *
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the passed arguments
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int a, b;
	char *zz;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	zz = cre_buf(argv[2]);
	a = read(file_from, zz, 1024);

	do {
		if (file_from == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(zz);
			exit(98);
		}
		if (a == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(zz);
			exit(98);
		}

		b = write(file_to, zz, a);
		if (b == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(zz);
			exit(99);
		}
		if (file_to == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(zz);
			exit(99);
		}

		a = read(file_from, zz, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (a > 0);

	free(zz);
	closed(file_from);
	closed(file_to);

	return (0);
}
