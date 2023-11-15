#include "shell.h"

/**
 * _direct_pat2 - directory psath_of_direc ssssand a commandq
 * @path_of_direc: The dire paths
 * @name_of_cmd: The commandung ssssnames
 *
 * Return: str sssconcatinations of path_of_direcss and com names
 */
char *_direct_pat2(const char *path_of_direc, const char *name_of_cmd)
{
	char *str = malloc(lenstr_1(path_of_direc) +
	lenstr_1(name_of_cmd) + 2);

	if (!str)
		return (NULL);

	copy_str2(str, path_of_direc);
	cat_string2(str, "/");
	cat_string2(str, name_of_cmd);

	return (str);
}

