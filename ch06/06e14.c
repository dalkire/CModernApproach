/*
 * Ch06 Ex14 | C Programming, A Modern Approach
 *
 * Find the error in the following program fragment and fix it.
 * if (n % 2 == 0);
 *     printf("n is even\n");
 */
#include <stdio.h>

int main(void)
{
	int n = 5;

	if (n % 2 == 0);
	        printf("n is even\n");

	printf("----------\n");

	if (n % 2 == 0) {
		printf("n is even\n");
	}

	return 0;
}

/*
 * There is an errant semicolon on line 14.
 */
