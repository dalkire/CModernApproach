/*
 * Ch05 Ex05 | C Programming, A Modern Approach
 *
 * Is the following if statement legal?
 * if (n >= 1 <= 10)
 *     printf("n is between 1 and 10\n");
 *
 * If so, what does it do when n is equal to 0?     
 */
#include <stdio.h>

int main(void)
{
	int n = 0;

	if (n >= 1 <= 10)
		printf("n is between 1 and 10\n");

	return 0;
}

/*
 * It is legal.
 * Relational operators are left associative, so n >= 1 <= 10 is:
 * (n >= 1) <= 10
 * (n >= 1) is either 0 or 1. Both are <= 10, so the expression
 * always returns 1, in other words the if statement will always be true.
 */
