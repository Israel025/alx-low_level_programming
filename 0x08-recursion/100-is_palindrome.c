#include "main.h"

/**
 * _strlen_recursion - prints the length of  a string.
 * @s: string to count.
 *
 * Description: functions as described above.
 * Return: an int value.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
}

/**
 * charEval - comapares character of a string.
 * @s: string to be evaluated.
 * @n1: smallest.
 * @n2: biggest
 *
 * Description: functions as described above.
 * Return: 0.
 */
int charEval(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + charEval(s, n1 + 1, n2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - Checks if a string is a palindrome or not.
 * @s: string to be evaluated.
 *
 * Description: functions as described above.
 * Return: 1(if true) and 0(otherwise).
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (charEval(s, 0, _strlen_recursion(s) - 1));
}
