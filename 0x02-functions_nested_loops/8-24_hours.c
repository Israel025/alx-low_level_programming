#include "main.h"

/**
 * jack_bauer - every minutes of the day.
 *
 * Description: This function printes every minutes
 * of the day starting from 00:00 to 23:59.
 * Return: this is a void function no value(s) returned
 */
void jack_bauer(void)
{
int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar (i / 10 + '0');
			_putchar (i % 10 + '0');
			_putchar (':');
			_putchar (j / 10 + '0');
			_putchar (j % 10 + '0');
			_putchar ('\n');
		}
	}
}
