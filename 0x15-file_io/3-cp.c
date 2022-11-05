#include "main.h"

/**
 * main - copies the content of a file to another file
 * @ac: number of arguments supplied
 * @av: a pointer to an array of arguments supplied
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	int fd1, fd2, rd_cnt, wrt, clo1, clo2, len = 0, index = 0;
	char *buf;

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd1 = open(av[1], O_RDONLY);
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);
	rd_cnt = read(fd1, buf, 1024);
	if (rd_cnt == -1 || fd1 == -1)
	{
		dprintf(2, "Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd2 = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0674);
	while (buf[index] != '\0')
	{
		len++;
		index++;
	}
	wrt = write(fd2, buf, len);
	if (wrt == -1 || fd2 == -1)
	{
		dprintf(2, "Can't write to %s\n", av[2]);
		exit(99);
	}
	free(buf);
	clo1 = close(fd2);
	clo2 = close(fd1);
	if (clo2 == -1 || clo1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (0);
}
