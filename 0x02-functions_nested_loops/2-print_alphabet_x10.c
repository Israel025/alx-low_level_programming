#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in small caps 10x
 *
 * Description: This function prints out all of the letters
 * of the alphabet in small caps, on ten different lines followed
 * by new line. its a void function, does not return anything
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
