#include "main.h"

/**
 * copy_file - Copies the content of one file to another.
 * @file_from: Source file name.
 * @file_to: Destination file name.
 *
 * Return: (0) on success, (-1) on failure.
 */
int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFSIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		return (-1);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		return (-1);
	}

	while ((bytes_read = read(fd_from, buffer, BUFSIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			return (-1);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		return (-1);
	}

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		return (-1);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		return (-1);
	}

	return (0);
}

/**
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: (0) on success, or an error code on failure.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (97);
	}

	if (access(argv[1], R_OK) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return (98);
	}

	if (copy_file(argv[1], argv[2]) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		return (99);
	}

	return (0);
}
