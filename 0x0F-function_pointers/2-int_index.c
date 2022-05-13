#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: The array holding the operands.
 * @size: The size of the array.
 * @cmp: The pointer to the function to be used.
 *
 * Description: functions as described above using pointer to a function.
 * Return: void, nothing is returned.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (!array || !size || !cmp)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}

	return (-1);
}
