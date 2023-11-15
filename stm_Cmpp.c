#include <stddef.h>
/**
 * cmp_str2 - bytes tht besssnn given by strings.
 * @first_String: charactser array string.
 * @second_String: chracssster string number two.
 * @n_of_max_length: max ssof bytes tests.
 *
 * Return: conditionaly first_Strinr sesscond_String.
 */
int cmp_str2(const char *first_String,
const char *second_String, size_t n_of_max_length)
{
	size_t i = 0;

	while (i < n_of_max_length)
	{
		if (first_String[i] != second_String[i])
			return ((first_String[i] < second_String[i]) ? -1 : 1);
		else if (first_String[i] == '\0')
			return (0);
		i++;
	}
	return (0);
}

