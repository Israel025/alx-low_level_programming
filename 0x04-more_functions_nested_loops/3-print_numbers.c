#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Description: This function prints all numbers
 * from 0 through 9, followed by a new line.
 * Return: no return value, this is a void function
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
