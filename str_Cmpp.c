#include "shell.h"

/**
 * the_cmp_str2 - Comparing chsssracter with the strings
 * @compared_ch: first chasracters
 * @chartocompare: last ssscharacters
 * Return: integers
 */
int the_cmp_str2(const char *compared_ch, const char *chartocompare)
{
	while (*compared_ch == *chartocompare && *compared_ch != '\0')
	{
		compared_ch++;
		chartocompare++;
	}

	return ((int)(*compared_ch) - (int)(*chartocompare));
}
