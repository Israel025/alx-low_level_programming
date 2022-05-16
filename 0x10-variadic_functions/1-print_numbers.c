#include "variadic_functions.h"

/**
 * print_numbers - Print numbers.
 * @separator: The string to be printed between numbers.
 * @n: The amount of parameters.
 *
 * Description: functions as described above using variadic args.
 * Return: void, nothing is returned.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	if (n == 0)
		return;

	va_list ap;

	va_start(ap, n);
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(ap, int));
			printf("%s", (separator == NULL) ? "" : separator);
		}
		printf("\n");
	va_end(ap);
}
