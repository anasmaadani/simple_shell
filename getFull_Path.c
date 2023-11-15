#include "shell.h"

/**
 * my_path2 - full path commands.
 * @cmd_name2: the commandss.
 * Return: ful dir paths or null return
*/

char *my_path2(const char *cmd_name2)
{
	char *pttt, *direc, *tknzr;

	pttt = copy_get2();
	if (!pttt)
		return (NULL);

	direc = NULL;
	tknzr = strtok(pttt, ":");

	while (tknzr != NULL)
	{
		direc = _direct_pat2(tknzr, cmd_name2);
		if (!direc)
			break;

		if (file_exit2(direc) == 1)
		{
			free(pttt);
			return (direc);
		}
		else
		{
			free(direc);
			direc = NULL;
			tknzr = strtok(NULL, ":");
		}
	}

	free(pttt);

	if (file_exit2(cmd_name2) == 1)
		return ((char *) cmd_name2);

	return (direc);
}

