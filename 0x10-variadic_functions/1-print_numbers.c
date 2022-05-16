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
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		printf("%s", (separator && i < (n - 1)) ? separator : "");
	}
	printf("\n");

	va_end(ap);
}
