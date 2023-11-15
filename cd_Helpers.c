#include "shell.h"

/**
 * the_env_vars2 - A function pprint an environment variable.
 * @env_ofchars2: The name of the environments variable.
 * @ptr_toenvire: The array of environments variable to print.
 *
 * Return: The value of the the environment variable.
 */

char *the_env_vars2(const char *env_ofchars2, char **ptr_toenvire)
{
	char **ptr_env2;

	for (ptr_env2 = ptr_toenvire; *ptr_env2 != NULL; ptr_env2++)
	{
		if (strncmp(env_ofchars2, *ptr_env2, lenstr_1(env_ofchars2)) == 0
				&& (*ptr_env2)[lenstr_1(env_ofchars2)] == '=')
		{
			return (*ptr_env2 + lenstr_1(env_ofchars2) + 1);
		}
	}
	return (NULL);
}

/**
 * the_error2 - the message errorq print.
 * @msg_toprinterr2: the message sto print errors.
 */
void the_error2(const char *msg_toprinterr2)
{
	printf("cd: %s\n", msg_toprinterr2);
}

/**
 * the_getdir2 - directory points get change to.
 * @path_ofdirec: path passed to initials changes directory.
 *
 * Return: the directory points get change to.
 */
char *the_getdir2(const char *path_ofdirec)
{
	if (path_ofdirec == NULL)
		return (the_env_vars2("HOME", environ));
	else if (the_cmp_str2(path_ofdirec, "-") == 0)
		return (the_env_vars2("the_old_pwd", environ));
	else
		return ((char *)path_ofdirec);
}

/**
 * the_handle_cwd2 - working directory Pointe .
 *
 * Return: The directory pointer working.
 */
char *the_handle_cwd2()
{
	char *ptrs2;

	ptrs2 = getcwd(NULL, 0);
	if (ptrs2 == NULL)
		perror("cd");
	return (ptrs2);
}

/**
 * the_swit_currdir2 - Change the directory current working.
 * @ptr_todirec: The directory pooint to change.
 */
void the_swit_currdir2(const char *ptr_todirec)
{
	if (chdir(ptr_todirec) < 0)
		perror("cd");
}
