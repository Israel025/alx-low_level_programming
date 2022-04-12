#include "main.h"

/* funtion file for print_alphabet function */

/**
 * prints the alphabet, in lowercase followed by new line
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
