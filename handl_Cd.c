#include "shell.h"

/**
 * the_cd_comend2 - han cd comands
 * @array_of_wordst: to ar of words
 * Return: void.
*/

void the_cd_comend2(char **array_of_wordst)
{
	char *cmdl = NULL, *p_wd, *p_wc;

	cmdl = the_getdir2(array_of_wordst[1]);
	if (cmdl == NULL)
	{
		the_error2("the directory is not found");
		return;
	}
	p_wd = the_handle_cwd2();
	if (p_wd == NULL)
		return;
	if (the_env_set2("pwdO", p_wd, 1) < 0)
	{
		free(p_wd);
		return;
	}
	free(p_wd);
	the_swit_currdir2(cmdl);
	p_wc = the_handle_cwd2();
	if (p_wc == NULL)
		return;
	if (the_env_set2("PWD", p_wc, 1) < 0)
	{
		free(p_wc);
		return;
	}
	free(p_wc);
}

