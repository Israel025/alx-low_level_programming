#include "main.h"

/**
 * sqtReal - recursively calculates the square root of a number.
 * @n: Number to be evaluated.
 * @k: The checker number
 *
 * Description: functions as described above.
 * Return: the square root value.
 */
int sqtReal(int n, int k)
{
	int ans;

	ans = k * k;
	if (n < 0)
	{
		return (-1);
	}
	if (ans > n)
	{
		return (-1);
	}
	if (ans == n)
	{
		return (k);
	}
	return (sqtReal(n, k + 1));
}
/**
 * _sqrt_recursion - calculates the square root of a number.
 * @n: Number to be evaluated.
 *
 * Description: functions as described above.
 * Return: the square root value.
 */
int _sqrt_recursion(int n)
{
	return (sqtReal(n, 1));
}
