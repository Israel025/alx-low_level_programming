#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The character to be checked
 *
 * Description: This function checks any number and
 * and print its last digit.
 * Return: the unsigned value of integer number entered
 */
int print_last_digit(int n)
{
	int lastD = n % 10;

	_putchar(lastD + '0');
	return (lastD);
}
