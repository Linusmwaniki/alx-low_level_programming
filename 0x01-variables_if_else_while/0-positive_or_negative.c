#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

int main(void)
{	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* checking if it is positive */
	if (n > 0)
		printf("%d is positive\n", n);
	/* checking if it is zero */
	else if (n == 0)
		printf("%d is zero\n", n);
	/* checking if it is negative */
	else
		printf("%d is negative\n", n);
	return (0);
}
