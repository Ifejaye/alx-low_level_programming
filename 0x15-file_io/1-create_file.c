#include "main.h"

/**
  * create_file - creates a file
  * @filename: file to create
  * @text_content: content
  *
  * Return: returns an integer
  */
int create_file(const char *filename, char *text_content)
{
	int fd, wrte;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	wrte = write(fd, text_content, sizeof(text_content));
	if (wrte == -1)
		return (-1);
	close(fd);
	return (1);
}
