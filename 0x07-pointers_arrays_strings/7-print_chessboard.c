#include "main.h"

/**
 * print_chessboard - locates a substring.
 * @a: multidimentional array with row(s) & columns.
 *
 * Description: functions as described above.
 * Return: void, no value is returned
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	while(i < 8)
	{
		for (j = 0; j < 8; j++)
		{
			putchar (a[i][j]);
		}
		putchar('\n');
		i++;
	}
}
