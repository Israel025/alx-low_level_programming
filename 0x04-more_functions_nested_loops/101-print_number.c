#include "main.h"

/**
 * print_number - prints an integer.
 * @n: The integer to print.
 *
 * Description: does as explained above using only
 * the _putchar function.
 * Return: void, no return value.
 */
void print_number(int n)
{
	unsigned int nos = n;

	if (n < 0)
	{
		_putchar('-');
		nos = -nos;
	}

	if ((nos / 10) != 0)
		print_number(nos / 10);

	_putchar((nos % 10) + '0');
}
