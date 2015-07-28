/*
 * Ch09 Ex16 | C Programming, A Modern Approach
 *
 * Condense the fact function in the same way we condensed power.
 */
#include <stdio.h>

long fact(int n);

int main(void)
{
	int n;

	printf("Enter a positive integer: ");
	scanf("%d", &n);
	printf("%d! = %ld\n", n, fact(n));

	return 0;
}

long fact(int n)
{
	return n == 1 ? 1 : n * fact(n - 1);
}
