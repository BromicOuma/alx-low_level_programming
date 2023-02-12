#include "main.h"

/**
  * read_textfile - reads text file and returns the length read
  * @filename: name of the file
  * @letters: number of letters to be writrn
  * Return: returns number of characters read
  */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char *buff;
	int read_time, written_char;

	if (filename == NULL)
	{
		return (0);
		exit(1);
	}
	buff = malloc(sizeof(char) * (letters));
	if (buff == NULL)
	{
		return (0);
		exit(1);
	}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
	free(buff);
	return (0);
	}
	read_time = read(fd, buff, letters);
	if (read_time < 0)
	{
	free(buff);
	close(fd);
	return (0);
	}
	written_char = write(STDOUT_FILENO, buff, letters);
	free(buff);
	close(fd);
	if (written_char < 0)
	{
	return (0);
	}
	return (written_char);
}
