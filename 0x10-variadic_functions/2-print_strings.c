#include "variadic_functions.h"

/**
 * print_strings - Print stringss.
 * @separator: The string to be printed between the strings.
 * @n: The amount of parameters.
 *
 * Description: functions as described above using variadic args.
 * Return: void, nothing is returned.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	if (n == 0)
		return;

	va_list ap;

	va_start(ap, n);

		unsigned int i;

		for (i = 0; i < n; i++)
		{
			const char *str = va_arg(ap, const char *);

			printf("%s", (str == NULL) ? "(nil)" : str);
			printf("%s", (separator == NULL) ? "" : separator);
		}
		printf("\n");

	va_end(ap);
}
