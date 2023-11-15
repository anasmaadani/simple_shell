#include "shell.h"

/**
 * _atoy3 - implements of the buil.
 * @string_convert2: a characters.
 * Return: intigers.
*/

int _atoy3(const char *string_convert2)
{
	int anxxx = 0, signal = 1;

	while (*string_convert2 == ' '
	|| *string_convert2 == '\t'
	|| *string_convert2 == '\n')
		string_convert2++;

	if (*string_convert2 == '-')
	{
		signal = -1;
		string_convert2++;
	}
	else if (*string_convert2 == '+')
		string_convert2++;

	while (*string_convert2 >= '0' && *string_convert2 <= '9')
	{
		anxxx = anxxx * 10 + (*string_convert2 - '0');
		string_convert2++;
	}

	return (signal * anxxx);
}

