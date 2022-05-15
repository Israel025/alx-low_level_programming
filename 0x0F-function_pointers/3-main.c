#include "3-calc.h"

/**
 * main - Entry point; performs simple operations.
 * @argc: The main argument count.
 * @argv: The main argument vector.
 *
 * Description: functions as described above.
 * followed by a new line.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*simp_opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	simp_opr = get_op_func(argv[2]);

	if (!simp_opr)
	{
		printf("Error\n");
		exit(99);
	}

	result = simp_opr(num1, num2);
	printf("%d\n", result);

	return (0);
}
