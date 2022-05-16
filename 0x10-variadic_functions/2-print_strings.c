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
	va_list ap;
	unsigned int i;
	const char *str;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, const char *);

		printf("%s", (str == NULL) ? "(nil)" : str);
		printf("%s", (separator && i < (n - 1)) ? separator : "");
	}
	printf("\n");

	va_end(ap);
}
