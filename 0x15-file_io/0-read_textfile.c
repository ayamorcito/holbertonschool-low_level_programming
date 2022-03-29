#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX stdout
 * @filename: the filename
 * @letters: number of letter it should read and print
 * Return: number of letters it could read an print, 0 if failed
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0;
	char *buff = malloc(sizeof(char) * letters);
	int count = 0, wr = 0;

	fd = open(filename, O_RDONLY);

	if (!filename || filename == NULL)
		return (0);

	if (buff == NULL)
		return (0);
	if (fd == -1)
		return (0);

	count = read(fd, buff, letters);

	wr = write(STDOUT_FILENO, buff, count);

	if (count == -1 || wr == -1 || fd == -1 || wr != count)
	{
		return (0);
	}

	free(buff);
	close(fd);

	return (wr);



}
