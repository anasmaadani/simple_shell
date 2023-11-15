#include "shell.h"

/**
 * the_int_to_string2 - intsissalase intiger
 * @n_ofInt: num of intigssers in function
 * Return: a characters
 */
char *the_int_to_string2(int n_ofInt)
{
	int base = 0, dgt = 0, n_int, i = 0, j = 0;
	char *_strng;

	if (n_ofInt < 0)
	{
		base = 1;
		n_ofInt *= -1;
		dgt++;
	}
	n_int = n_ofInt;
	while (n_int > 0)
	{
		dgt++;
		n_int /= 10;
	}
	_strng = (char *) malloc(sizeof(char) * (dgt + 1));
	do {
		_strng[i++] = (n_ofInt % 10) + '0';
		n_ofInt /= 10;
	} while (n_ofInt);

	if (base)
	{
		_strng[i++] = '-';
	}

	j = i - 1;
	i = 0;
	while (i < j)
	{
		char tmp = _strng[i];

		_strng[i] = _strng[j];
		_strng[j] = tmp;
		i++;
		j--;
	}

	_strng[dgt] = '\0';
	return (_strng);
}

/**
 * the_digits2- digis
 * @k: digita
 * Return: booling
 */
int the_digits2(int k)
{
	if (k >= '0' && k <= '9')
		return (1);
	else
		return (0);
}



