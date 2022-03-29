#include "main.h"

/**
 * create_file -  reads a text file and prints it to the POSIX stdout
 * @filename: the filename
 * @text_content: number of letter it should read and print
 * Return: number of letters it could read an print, 0 if failed
 **/

int create_file(const char *filename, char *text_content)
{
	int fd = 0, i = 0, wr = 0;

	fd = open(filename, O_CREAT, S_IRWXU);

	if (!filename || filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	if (fd == -1)
		return (-1);
	while (text_content[i])
		i++;

	wr = write(fd, text_content, i);

	if (wr != i)
	{
		return (-1);
	}

	close(fd);

	return (1);



}
