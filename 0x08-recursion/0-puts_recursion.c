#include "main.h"

/**
 * _puts_recursion - prints a string using recursion.
 * @s: string to print.
 *
 * Description: functions as described above.
 * Return: void, no return value.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
