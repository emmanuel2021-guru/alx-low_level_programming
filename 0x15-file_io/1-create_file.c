#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to be created
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, wrt;

	if (filename == NULL)
		return (-1);

	while (*text_content != '\0')
	{
		len++;
		text_content++;
	}

	len++;

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wrt = write(fd, text_content, len);
		if (wrt == -1)
			return (-1);
	}
	
	close(fd);

	return (1);
}
