#include "main.h"

/**
 * print_alphabet - prints the alphabet in small caps
 *
 * Description: This function prints out all of the letters
 * of the alphabet in small caps, followed by new line.
 * its a void function, does not return anything
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
