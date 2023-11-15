#include "shell.h"


/**
 * the_print_errors2 - errors.
 * @name_ofprogram2: name.
 * @cmd_name2d: the command.
 * @err_msgouput: the message.
 * @err_counter2: counting the variable.
 * Return:  voids.
*/
void the_print_errors2(char *err_counter2,
char *name_ofprogram2,
char *cmd_name2d, char *err_msgouput)
{
	write(STDERR_FILENO, name_ofprogram2, lenstr_1(name_ofprogram2));
	if (cmd_name2d != NULL)
	{
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, err_counter2, lenstr_1(err_counter2));
		write(STDERR_FILENO, ": ", 2);
		write(STDERR_FILENO, cmd_name2d, lenstr_1(cmd_name2d));
	}
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, err_msgouput, lenstr_1(err_msgouput));
}

/**
 * the_exer2- error message
 * @shell: name of simples shell
 * @array_ofstr: pointersss to pointers
 * @contr: char pointer
 * Return: void return
*/
void the_exer2(char **array_ofstr, int contr, char *shell)
{
	char *error_msg2 = the_int_to_string2(contr);

	write(STDOUT_FILENO, shell, lenstr_1(shell));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, error_msg2, lenstr_1(error_msg2));
	write(STDOUT_FILENO, ": ", 2);
	write(STDOUT_FILENO, array_ofstr[0], lenstr_1(array_ofstr[0]));
	write(STDOUT_FILENO, ": Illegal number: ", 19);
	write(STDOUT_FILENO, array_ofstr[1], lenstr_1(array_ofstr[1]));
	write(STDOUT_FILENO, "\n", 2);
	free(error_msg2);
}
