/**
 *prints the alphabet, in lowercase
 *followed by new line
 *Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int i;
	for (i = 97; i < 123; i++)
	{
		int _putchar(i);
	}
	int _putchar('\n');
}
