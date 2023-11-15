#include "shell.h"

/**
 * file_exit2 - if the file exists.
 * @path_of_file2: a file to checks.
 * Return: 1 if the file exists, otherwise 0.
 */
int file_exit2(const char *path_of_file2)
{
	struct stat buf_rr;

	if (stat(path_of_file2, &buf_rr) != 0)
		return (0);
	return (1);
}

