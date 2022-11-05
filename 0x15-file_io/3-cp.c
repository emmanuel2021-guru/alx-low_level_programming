#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - creates a buffer
 * @file: file to create buffer from
 *
 * Return: a pointer to an allocated memory space for buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - closes a file descriptor
 * @fd: file descriptor to close
 *
 * Return: Nothing
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments supplied
 * @av: a pointer to an array of arguments supplied
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int fd1, fd2, rd_cnt, wrt;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	buf = create_buffer(av[2]);
	rd_cnt = read(fd1, buf, 1024);
	fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (rd_cnt == -1 || fd1 == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n", av[1]);
			exit(98);
		}
		wrt = write(fd2, buf, rd_cnt);
		if (wrt == -1 || fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Can't write to %s\n", av[2]);
			exit(99);
		}
		rd_cnt = read(fd1, buf, 1024);
		fd2 = open(av[2], O_WRONLY | O_APPEND);
	} while (rd_cnt > 0);

	free(buf);
	close_file(fd2);
	close_file(fd1);
	return (0);
}
