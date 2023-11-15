#include "shell.h"

/**
 * copy_str2 - resosursing
 * @str_dest: arrayss of characters
 * @str_source2: chractser[0]
 * Return: copisng the command
*/

char *copy_str2(char *str_dest, const char *str_source2)
{
	char *Str_copy = str_dest;

	while (*str_source2 != '\0')
	{
		*Str_copy++ = *str_source2++;
	}
	*Str_copy = '\0';
	return (str_dest);
}

