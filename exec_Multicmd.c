#include "shell.h"

/**
 * the_exe_cmd2 - Executes the semi colone.
 * @input_strcmd2: inputs string containing the commands
 * @name_ofprogram2: programme name
 * @_counter: the counts.
 * Return: errors codes.
 */
int the_exe_cmd2(char *input_strcmd2, char *name_ofprogram2, int _counter)
{
	int y_cmd, y_word, i, exit_cmd2;
	char **cmd_arrs2, **wrd2_arrs;

	cmd_arrs2 = split_str2(input_strcmd2, ";", &y_cmd);
	if (cmd_arrs2 == NULL)
	{
		printf("Error splitting user input\n");
		return (errno);
	}

	for (i = 0; i < y_cmd; i++)
	{
		wrd2_arrs = split_str2(cmd_arrs2[i], " \t\r\n", &y_word);
		if (wrd2_arrs == NULL)
		{
			perror("Error splitting command string\n");
			continue;
		}
		if (y_word == 0)
		{
			free_word2(cmd_arrs2, y_cmd);
			free_word2(wrd2_arrs, y_cmd);
			return (0);
		}
		if (the_cmp_str2(wrd2_arrs[0], "exit") == 0)
		{
			free_word2(cmd_arrs2, y_cmd);
			the_handle_exits2(wrd2_arrs, input_strcmd2,
			name_ofprogram2, _counter, y_word);
		}
		exit_cmd2 = _execute_fork2(wrd2_arrs, input_strcmd2, name_ofprogram2,
		_counter, y_word);
		free_word2(wrd2_arrs, y_word);
	}

	free_word2(cmd_arrs2, y_cmd);
	return (exit_cmd2);
}

