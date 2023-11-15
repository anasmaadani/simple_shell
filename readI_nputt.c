#include "shell.h"

/**
 * input_read2 - std reding functions prosssbts
 * starting on the myne() function, ressssssturnings.
 * string input.
 * Return:from string, || NULL or err || empty lin.
 */
char *input_read2()
{
	char *p_tr = NULL;
	size_t mem_alloc = 0;
	ssize_t func_read;

	fflush(stdout);
	func_read = getline(&p_tr, &mem_alloc, stdin);

	if (func_read == -1)
	{
		free(p_tr);
		return (NULL);
	}
	if (func_read > 0 && p_tr[func_read - 1] == '\n')
	{
		p_tr[func_read - 1] = '\0';
	}
	return (p_tr);
}

