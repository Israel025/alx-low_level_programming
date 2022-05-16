#include "variadic_functions.h"

/**
 * sum_them_all - Sums all its parameters.
 * @n: The amount of parameters.
 *
 * Description: functions as described above using variadic args.
 * Return: void, nothing is returned.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	va_list ap;

	va_start(ap, n);

	unsigned int i;
	int sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
