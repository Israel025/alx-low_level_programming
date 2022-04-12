#include "main.h"

/**
 * _abs - prints the absolute value of a number.
 * @n: The character to be checked
 *
 * Description: This function checks any number and
 * and print its absolute value.
 * Return: the unsigned value of integer number entered
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-1 * n);
	}
}
