#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: The first integer value to be swapped.
 * @b: The second integer value to be swapped.
 *
 * Description: functions as described above
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
