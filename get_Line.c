#include "shell.h"

/**
 * the_get_line2 - to custumise ssget lines
 * @output_String: a output_String points
 * @output_SZ: definition ss as 1024
 * @reading_file: the fillses be read
 * Return: write line leng in returns.
*/

ssize_t the_get_line2(char **output_String, size_t *output_SZ,
FILE *reading_file)
{
	ssize_t lgth2 = 0, first_inp2 = 0;
	char *strss = NULL, curr_cmd = ' ';

	if (first_inp2 == 0)
		fflush(reading_file);
	else
		return (-1);

	strss = malloc(STORAGE_SIZE * sizeof(char));
	if (strss == NULL)
		return (-1);

	while (curr_cmd != '\n')
	{
		if (!the_read_input2(&curr_cmd))
		{
			free(strss);
			exit(EXIT_SUCCESS);
		}

		if (first_inp2 >= STORAGE_SIZE)
			strss = the_re_allocation2(strss, first_inp2 + 1);
		strss[first_inp2++] = curr_cmd;
	}

	strss[first_inp2] = '\0';
	the_buf_upto2(output_String, output_SZ, strss, first_inp2);
	lgth2 = first_inp2;

	if (first_inp2 != 0)
		first_inp2 = 0;

	return (lgth2);
}

