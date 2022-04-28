#include "main.h"

/**
 * factorial - prints the factorial of a given number.
 * @n: number to be evaluated.
 *
 * Description: functions as described above.
 * Return: the factorial result of n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1 || n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
