#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	switch(n > 0)
	{
		case true :
			printf("%d is positive\n", n);
			break;
		case false :
			printf("%d is negative\n", n);
			break;
		default :
			printf("%d is zero\n", n);
	}
	return (0);
}
