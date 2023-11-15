#include "shell.h"

/**
 * _dup_str2 - characters destructions.
 * @Strings: arreyss of chracters.
 * Return: none lenthings.
 */
char *_dup_str2(const char *Strings)
{
	size_t str_len = lenstr_1(Strings), i;
	char *ptr = malloc(str_len + 1);

	if (ptr)
	{
		for (i = 0; i < str_len; i++)
			ptr[i] = Strings[i];
		ptr[str_len] = '\0';
	}

	return (ptr);
}

