#include "main.h"

/**
 * print_line - prints a straight line in the terminal.
 * @n:the amount of line that will be printed.
 *
 * Description: does as explained above ending
 * with a new line.
 * Return: void,  no return value.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
