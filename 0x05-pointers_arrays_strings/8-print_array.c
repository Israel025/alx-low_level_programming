#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: The array to be printed.
 * @n: amount of elements to be printed.
 *
 * Description: functions as described above
 * followed by a new line.
 * Return: void, no return value.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == (n - 1))
			continue;
		else
			printf(", ");
	}
	_putchar('\n');
}
