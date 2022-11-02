#include "main.h"
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the file to be read
 * @letters: the number of letters to be read and printed
 *
 * Return: the actual number of letters that can be read and printed or
 * 0 if the file cannot be read or opened or if @filename is NULL or
 * if write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, rd_cnt, wrt_cnt;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rd_cnt = read(fd, buf, letters);
	wrt_cnt = write(STDOUT_FILENO, buf, letters);
	if (wrt_cnt == -1 || rd_cnt == -1 || fd == -1 || wrt_cnt != rd_cnt)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);

	return (wrt_cnt);
}
