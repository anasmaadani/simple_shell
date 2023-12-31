#include "shell.h"

/**
 * the_handle_cmd2 - red off env,s setting,s unsseting.s
 * @array_ofwrd2: comand pssrovid.
 * @my_shell_name: titel.
 * @counting_Cmd: cmonad counting.
 * @n: random names.
 * @User_inp: user issnput space
 * Return: 1 in case cmd isss found or zero.
*/

int the_handle_cmd2(char **array_ofwrd2, char *User_inp,
char *my_shell_name, int counting_Cmd, int n)
{
	char *arr_cmd = array_ofwrd2[0];
	int n_cmd = 0;
	(void)my_shell_name, (void)counting_Cmd, (void)n, (void)User_inp;

	if (the_cmp_str2(arr_cmd, "env") == 0)
	{
		the_hand_env2();
		n_cmd = 1;
	}
	else if (the_cmp_str2(arr_cmd, "setenv") == 0)
	{
		if (array_ofwrd2[1] && array_ofwrd2[2])
			the_env_set2(array_ofwrd2[1], array_ofwrd2[2], 1);
		else
			perror("Usage: setenv VARIABLE VALUE\n");
		n_cmd = 1;
	}
	else if (the_cmp_str2(arr_cmd, "unsetenv") == 0)
	{
		if (array_ofwrd2[1])
			the_unsetenvs2(array_ofwrd2[1]);
		else
			perror("Usage: unsetenv VARIABLE\n");
		n_cmd = 1;
	}
	else if (the_cmp_str2(arr_cmd, "cd") == 0)
	{
		the_cd_comend2(array_ofwrd2);
		n_cmd = 1;
	}
	return (n_cmd);
}

