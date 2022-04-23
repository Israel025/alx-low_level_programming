#include "main.h"

/**
 * reverse_array - reverses the content of an array.
 * @a: The array to be reversed.
 * @n: The length of the array
 *
 * Description: functions as described above
 * Return: void, no value is returned.
 */
void reverse_array(int *a, int n)
{
	int i, swap;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = swap;
	}
}
