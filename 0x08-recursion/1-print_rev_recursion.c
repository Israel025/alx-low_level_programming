#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse  using recursion.
 * @s: string to print.
 *
 * Description: functions as described above.
 * Return: void, no return value.
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
	}
	_putchar(*s);
}
