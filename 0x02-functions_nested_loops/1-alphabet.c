#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *program prints all letter of the alphabet in
 *in small case, followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
print_alphabet();
_putchar('\n');

return (0);
}

/**
 *prints the alphabet, in lowercase
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
int i;
for (i = 97; i < 123; i++)
{
	_putchar(i);
}
}
