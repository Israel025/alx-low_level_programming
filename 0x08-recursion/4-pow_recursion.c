#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to power y.
 * @x: the base number.
 * @y: power raised to.
 *
 * Description: functions as described above.
 * Return: the result of x to power of y.
 */
int _pow_recursion(int x, int y)
{
	if (x == 0)
	{
		return (0);
	}
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
