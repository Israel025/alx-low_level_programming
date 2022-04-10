#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char nl[] = "\n";
	char st[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, st, sizeof(st));
	write(2, nl, sizeof(nl));
	return (1);
}
