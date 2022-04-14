#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9 (excluding 2 & 4).
 *
 * Description: This function prints all numbers
 * from 0 through 9 (without 2 and 4), followed by a new line.
 * Return: no return value, this is a void function
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == 50 || i == 52)
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
