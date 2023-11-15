#include "shell.h"

/**
 * copy_get2 - take a copss environ variables
 * Return: A ne allo stsssr conturs a cop of ptt variables,
 * or NULL.
 */
char *copy_get2()
{
	char *ptr_ = getenv("PATH");
	char *str_copy;

	if (!ptr_)
		return (NULL);

	str_copy = _dup_str2(ptr_);
	if (!str_copy)
		return (NULL);

	return (str_copy);
}

