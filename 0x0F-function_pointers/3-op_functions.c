#include "3-calc.h"

/**
 * op_add - Sums two integers.
 * @a: The first operands.
 * @b: The second operand.
 *
 * Description: functions as described above.
 * Return: the sum value.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Gives the difference between two integers.
 * @a: The first operands.
 * @b: The second operand.
 *
 * Description: functions as described above.
 * Return: the difference value.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two integers.
 * @a: The first operands.
 * @b: The second operand.
 *
 * Description: functions as described above.
 * Return: the multiplication value.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides a by b.
 * @a: The first operands.
 * @b: The second operand.
 *
 * Description: functions as described above.
 * Return: the division value.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Gives the remainder of division of two integers.
 * @a: The first operands.
 * @b: The second operand.
 *
 * Description: functions as described above.
 * Return: the modulo value.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
