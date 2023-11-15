#include "shell.h"

/**
 * exe_cmd_withexecve2 - the function command
 * @cmod2: the execute command
 * @arrayy_ofword2: array commands.
 * Return: void return
*/

void exe_cmd_withexecve2(char *cmod2, char **arrayy_ofword2)
{
	if (execve(cmod2, arrayy_ofword2, NULL) == -1)
	{
		perror("Error executing command");
		return;
	}
}


/**
 * wait_kid_proce2 - wait child  to end of the process
 * @child_p_id2: the process
 * @Exit_status: Exit_status of the process
 * Return: void return
*/

void wait_kid_proce2(pid_t child_p_id2, int *Exit_status)
{
	if (waitpid(child_p_id2, Exit_status, 0) == -1)
	{
		perror("Error while waiting for child process");
		return;
	}
}
/**
 * the_valid_word2 - check if work in the process
 * @str_tobechecked: word string.
 * Return: 1 if valid 0 none valid.
*/
int the_valid_word2(char *str_tobechecked)
{
	int y = 0;

	while (str_tobechecked[y] != '\0')
	{
		if (!isalnum(str_tobechecked[y]) && str_tobechecked[y] != '-' &&
			str_tobechecked[y] != '_' && str_tobechecked[y] != '.')
		return (0);
		y++;
	}
return (1);
}
