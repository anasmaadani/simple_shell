#include "shell.h"

/**
 * the_handle_exits2 -  exit builtins commands.
 * @wordArray2: the commanding.
 * @uInput: inputss user.
 * @shellN: programs nomes
 * @contre: contre commandss
 * @nX: numbers of commandss
 * Return: void.
 */
void the_handle_exits2(char **wordArray2, char *uInput,
char *shellN, int contre, int nX)
{
	int ex_2, y = 0;

	if (wordArray2[1] == NULL)
	{
		free(uInput);
		free_word2(wordArray2, nX);
		exit(EXIT_SUCCESS);
	}

	while (wordArray2[1][y])
	{
		if (the_digits2(wordArray2[1][y++]) == 0)
		{
			the_exer2(wordArray2, contre, shellN);
			break;
		}
		else
		{
			ex_2 = _atoy3(wordArray2[1]);
			free(uInput);
			free_word2(wordArray2, nX);
			exit(ex_2);
		}
	}

}

