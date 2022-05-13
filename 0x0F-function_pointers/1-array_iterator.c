#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array.
 * @array: The array holding the operands.
 * @size: The size of the array.
 * @action: The pointer to the function to be used.
 *
 * Description: functions as described above using pointer to a function.
 * Return: void, nothing is returned.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action || !size)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
