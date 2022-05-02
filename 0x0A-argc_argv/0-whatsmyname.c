#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name.
 * @argc: The size of the argument vector array (argv).
 * @argv: The argument vector array.
 *
 * Description: This program does as specified above
 * and followed by a new line
 * Return: void
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s", argv[0]);

	return (0);
}
