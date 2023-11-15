#include "shell.h"

/**
 * the_read_input2  - read thess inputs
 * @input_ch: to read
 * Return: 1 if read selse 0
*/

int the_read_input2(char *input_ch)
{
	ssize_t str_y = read(STDIN_FILENO, input_ch, 1);

	if (str_y == -1)
		return (0);
	if (str_y == 0)
	{
		if (input_ch != NULL)
			input_ch[0] = '\0';
		return (0);
	}
	return (1);
}

/**
 * the_re_allocation2  - sams as Csss realocation of the process
 * @old_memo_ptr: to oldsss ones
 * @new_memo_size2: cuse sizines
 * Return: voids
*/

void *the_re_allocation2(void *old_memo_ptr, size_t new_memo_size2)
{
	void *ptrs2;

	if (new_memo_size2 == 0)
	{
		free(old_memo_ptr);
		return (NULL);
	}

	ptrs2 = malloc(new_memo_size2);
	if (ptrs2 == NULL)
	return (NULL);

	if (old_memo_ptr != NULL)
	{
		the_memry_copy2(ptrs2, old_memo_ptr, new_memo_size2);
		free(old_memo_ptr);
	}

	return (ptrs2);
}

/**
 * the_buf_upto2  - up the buffers
 * @buf_: points
 * @ptr_of_buff2: the si of bsufer
 * @new_bufdata: storss
 * @curr_pos: curss posi of bfer
 * Return: voids
*/
void the_buf_upto2(char **buf_, size_t *ptr_of_buff2,
char *new_bufdata, size_t curr_pos)
{
	if (*buf_ == NULL || *ptr_of_buff2 < curr_pos)
	{
		*ptr_of_buff2 = (curr_pos > STORAGE_SIZE) ? curr_pos : STORAGE_SIZE;
		*buf_ = new_bufdata;
	}
	else
	{
		copy_str2(*buf_, new_bufdata);
		free(new_bufdata);
	}
}

