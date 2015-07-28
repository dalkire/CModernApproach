/*
 * Ch09 Ex17 | C Programming, A Modern Approach
 *
 * Write a recursive version of the gcd function (see Exercise 3). Here's the
 * strategy to use for computing gcd(m, n): If n is 0, return m. Otherwise,
 * call gcd recursively, passing n as the first argument and m % n as the
 * second.
 */
#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
	int m, n;

	printf("Enter two positive integers to find their GCD: ");
	scanf("%d%d", &m, &n);
	printf("GCD: %d\n", gcd(m, n));

	return 0;
}

int gcd(int m, int n)
{
	return n == 0 ? m : gcd(n, m % n);
}
