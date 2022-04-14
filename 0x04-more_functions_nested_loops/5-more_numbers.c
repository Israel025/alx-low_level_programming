#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14.
 *
 * Description: This function prints all numbers
 * from 0 through 14, followed by a new line.
 * Return: no return value, this is a void function
 */
void more_numbers(void)
{
	int i, j, hold1, hold2;

	for (i = 0; i < 10; i++)
	{
		for(j = 0; j < 15; j++)
		{
			hold1 = j;

			if (j > 9)
			{
				hold1 = j / 10;
				hold2 = j % 10;
			}

			_putchar(hold1 + '0');

			if (j > 9)
			{
				_putchar(hold2 + '0');
			}
		}
		_putchar('\n');
	}
}
