#include "main.h"

/**
  * append_text_to_file - append_text_to_file
  * @filename: file to append
  * @text_content: content
  *
  * Return: returns an iinteger
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;


	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, sizeof(text_content));
	close(fd);
	return (1);
}
