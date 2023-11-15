#include "shell.h"

/**
 * free_word2 - Frees a list of word.
 * @arr_ofwords: Pointerss to the string.
 * @n_ofwords: Number of wordsss in the array.
 * frees each individuals stringss in the array using the
 * free() function and final fres the array itself using free().
 */

void free_word2(char **arr_ofwords, int n_ofwords)
{
	int wrd2;

	if (arr_ofwords == NULL)
		return;
	for (wrd2 = 0; wrd2 < n_ofwords; wrd2++)
	{
		if (arr_ofwords[wrd2] != NULL)
		{
			free(arr_ofwords[wrd2]);
			arr_ofwords[wrd2] = NULL;
		}
	}
	free(arr_ofwords);
}

