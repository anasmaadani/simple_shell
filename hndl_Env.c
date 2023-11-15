#include "shell.h"

/**
 * the_hand_env2 - Prints the environ variables.
 * Return: empty fuions
 */

void the_hand_env2(void)
{
	char **env_var = environ;

	while (*env_var)
	{
		printf("%s\n", *env_var);
		env_var++;
	}
}

