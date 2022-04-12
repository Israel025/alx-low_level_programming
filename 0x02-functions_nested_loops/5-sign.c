#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: The character to be checked
 *
 * Description: This function checks the sign of any
 * number.
 * Return: 1 & print + if the number is greater than zero.
 * Return 0 & print 0 if the number is zero.
 * Return -1 & print - if the number is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if else (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}}
