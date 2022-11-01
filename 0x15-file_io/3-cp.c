#include <stdio.h>
#include "main.h"


/**
  * open_file1 - open first file
  * @a: first file
  *
  * Return: returns an integer
  */
int open_file1(char *a)
{
	int fd1;

	if (a == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
		exit(98);
	}
	fd1 = open(a, O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", a);
		exit(98);
	}
	return (fd1);
}


/**
  * open_file2 - open secone file
  * @b: the second file
  *
  * Return: returns an integer
  */
int open_file2(char *b)
{
	int fd2;

	fd2 = open(b, O_WRONLY);
	if (fd2 == -1)
	{
		fd2 = creat(b, 0664);
		if (fd2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", b);
			exit(99);
		}
	}
	return (fd2);
}
/**
  * main - copies the content of a file to another file.
  * @ac: number of inputs
  * @av: the inputs
  *
  * Return: returns integer
  */
int main(int ac, char **av)
{
	int wr, rd, fd1, fd2;
	char *buf;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd1 = open_file1(av[1]);
	fd2 = open_file2(av[2]);
	buf = malloc(1024);
	if (buf == NULL)
		return (-1);
	rd = read(fd1, buf, 1024);
	if (rd == -1)
		return (-1);
	wr = write(fd2, buf, 1024);
	if (wr == -1)
		return (-1);
	close(fd1);
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	close(fd2);
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	return (1);
}
