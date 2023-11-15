#include "shell.h"

/**
 * the_unsetenvs2 - red offs vasriables of environment.
 * @name_ofenvire: envvsN naming  tos unseting.
 * Return: 0 on case sucscess, other -1.
 */
int the_unsetenvs2(const char *name_ofenvire)
{
	int un_var;

	if (!name_ofenvire || name_ofenvire[0] == '\0')
	{
		perror("unsetenv: invalid env name\n");
		return (-1);
	}

	un_var = unsetenv(name_ofenvire);

	if (un_var < 0)
		perror("unsetenv: failed to unset env\n");

	return (un_var);
}

