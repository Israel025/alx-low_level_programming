#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: source (double pointer).
 * @to: destination
 *
 * Description: functions as described above.
 * Return: void, no value is returned
 */
void set_string(char **s, char *to)
{
	*s = to;
}
