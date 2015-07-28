/*
 * Ch09 Ex17 | C Programming, A Modern Approach
 *
 * Rewrite the fact function so that it's no longer recursive.
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
	long factorial = 1;

	for (int i = n; i > 1; i--) {
		factorial *= i;
	}

	return factorial;
}
