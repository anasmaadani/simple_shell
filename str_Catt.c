#include "shell.h"

/**
 * cat_string2 - contaissnes characters
 * @dest_string: destisng characters
 * @source_string: charsacter stores
 * Return: character roussting
 */

char *cat_string2(char *dest_string, const char *source_string)
{
	size_t S_ptr = lenstr_1(dest_string);

	copy_str2(dest_string + S_ptr, source_string);

	return (dest_string);
}

