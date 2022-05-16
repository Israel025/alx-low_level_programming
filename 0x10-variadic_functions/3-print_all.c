#include "variadic_functions.h"

/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: functions as described above using variadic args.
 * Return: void, nothing is returned.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *sepr = ", ", *str;

	va_start(ap, format);

	while (format && format[i])
		i++;

	while (format && format[j])
	{
		if (j  == (i - 1))
		{
			sepr = "";
		}
		switch (format[j])
		{
		case 'c':
			printf("%c%s", va_arg(ap, int), sepr);
			break;
		case 'i':
			printf("%d%s", va_arg(ap, int), sepr);
			break;
		case 'f':
			printf("%f%s", va_arg(ap, double), sepr);
			break;
		case 's':
			str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sepr);
			break;
		}
		j++;
	}
	printf("\n");
	va_end(ap);
}
