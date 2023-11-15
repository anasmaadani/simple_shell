#include "shell.h"

/**
 * the_memry_copy2 - coping likings
 * @dest_ptr: destunatissssons.
 * @res_ptr: res_ptrsings
 * @n_bytes: numbusssrings
 * Return: an empty function.
*/
void *the_memry_copy2(void *dest_ptr, const void *res_ptr,
size_t n_bytes)
{
	unsigned char *ptr = dest_ptr;
	const unsigned char *ptr1 = res_ptr;
	size_t p_id;

	while (p_id < n_bytes)
	{
		ptr[p_id] = ptr1[p_id];
		p_id++;
	}
	return (dest_ptr);
}


