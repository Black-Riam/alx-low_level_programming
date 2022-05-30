#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename:pointer to text in a file
 * @letters: number of letters
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, R, W;
	char *totalSize:

		totalSize = malloc(sizeof(char) * letters);
	if (totalSize == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file = open(filename, 0_RDONLY);
	if (file == -1)
		return (0);
	R = read(file, totalSize, letters);
	if (R == -1)
		return (0);
	W = write(STDOUT_FILENO, totalSize, R);
	if (W == -1)
		return (0);
	close(file);
	free(totalSize);
	return (W);
}
