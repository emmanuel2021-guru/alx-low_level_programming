#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt, len = 0, index = 0;

	if (filename == NULL)
		return (-1);

	while (text_content[index] != '\0')
	{
		len++;
		index++;
	}

	len++;

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	wrt = write(fd, text_content, len);
	if (wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
