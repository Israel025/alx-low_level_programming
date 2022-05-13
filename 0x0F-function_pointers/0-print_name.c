#include "function_pointers.h"

/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: The function called.
 *
 * Description: functions as described above using pointer to a function.
 * Return: void, nothing is returned.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
