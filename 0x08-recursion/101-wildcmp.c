#include "main.h"

/**
 * primeEval - recursively evaluates a number if its prime or not.
 * @n: Number to be evaluated.
 * @j: The checker number
 *
 * Description: functions as described above.
 * Return: 1 0r 0 respectively.
 */
int primeEval(int n, int j)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (j >= 2)
	{
		if (n % j > 0)
			primeEval(n, j - 1);
	}
	if (j == 1)
		return (1);
}
/**
 * is_prime_number - Checks if a number is prime or not.
 * @n: Number to be evaluated.
 *
 * Description: functions as described above.
 * Return: 1(if true) and 0(otherwise).
 */
int is_prime_number(int n)
{
	return (primeEval(n, n - 1));
}
