#include <sys/types.h>
#include <sys/stat.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
  * read_textfile -  reads a text file and prints it
  * @filename: the textfile
  * @letters: size of letters
  *
  * Return: returns a text
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wrt;
	char *buf;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof (char) * (letters));
	if (buf == NULL)
		return (0);
	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		close (fd);
		return (0);
	}
	buf[rd] = '\0';
	wrt = write(STDOUT_FILENO, buf, rd);
	if (wrt == -1)
	{
		close (fd);
		return (0);
	}
	close (fd);
	return (wrt);
}
