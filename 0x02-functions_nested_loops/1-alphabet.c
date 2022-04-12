#include "main.h"

/*prints the alphabet, in lowercase followed by new line */


/*
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

/* prints the alphabet, in lowercase followed by new line */
void print_alphabet(void)
{
	/* prints the alphabet, in lowercase followed by new line */
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
