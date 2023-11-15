#include "shell.h"

/**
 * _execute_bn2 - executeq this /bin/ls
 * @array_cmd_args2: array the to commands
 * Return: void return.
*/
void _execute_bn2(char **array_cmd_args2)
{
	pid_t n_pid;
	int curr_pid2;

	n_pid = fork();
	if (n_pid == 0)
	{
		exe_cmd_withexecve2("/bin/ls", array_cmd_args2);
		perror("Error executing command\n");
		exit(100);
	}
	else if (n_pid < 0)
	{
		perror("Error forking");
		return;
	}
	else
		waitpid(n_pid, &curr_pid2, 0);
}

/**
 * _execute_fork2 - the executess  fork-exec
 * @array_cmd_args2: arr the commands
 * @input_ofusr: user prompts
 * @name_ofshell2: namessss programme.
 * @counter_ofcmd: monadss counters
 * @n: integer variables
 * @input_ofusr: variables
 * Return: code errors.
 */

int _execute_fork2(char **array_cmd_args2, char *input_ofusr,
char *name_ofshell2, int counter_ofcmd, int n)
{
	char *cmd_name2 = NULL, *c = NULL, *crr_pid = NULL;
	pid_t pid_y;
	int cr, cddd;

	if (array_cmd_args2)
	{
		cmd_name2 = array_cmd_args2[0];
		if (the_cmp_str2(cmd_name2, "/bin/ls") == 0)
		{
			_execute_bn2(array_cmd_args2);
			return (0);
		}
		if (the_handle_cmd2(array_cmd_args2, input_ofusr,
		name_ofshell2, counter_ofcmd, n) == 1)
			return (0);
		c = my_path2(cmd_name2);
		if (!c)
		{
			crr_pid = the_int_to_string2(counter_ofcmd);
			if (!the_valid_word2(cmd_name2))
				the_print_errors2(crr_pid, name_ofshell2, NULL, "not found\n");
			else
				the_print_errors2(crr_pid, name_ofshell2, cmd_name2, "not found\n");
			free(crr_pid);
			return (127);
		}
		pid_y = fork();
		if (pid_y == 0)
			exe_cmd_withexecve2(c, array_cmd_args2);
		else if (pid_y < 0)
			return (errno);
		wait_kid_proce2(pid_y, &cr);
		if (WIFEXITED(cr))
			cddd = (WEXITSTATUS(cr));
	}
	if (cmp_str2(*array_cmd_args2, "./", 2) != 0
	&& cmp_str2(*array_cmd_args2, "/", 1) != 0)
		free(c);

	return (cddd);
}

