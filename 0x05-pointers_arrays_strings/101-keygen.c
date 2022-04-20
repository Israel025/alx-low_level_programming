#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Generates random keygen.
 *
 * Description: functions as described above
 * Return: always 0.
 */
int main(void)
{
	int key;

	srand(time(0));
	key = rand();
	printf("%i\n", key);
	return (0);
}
