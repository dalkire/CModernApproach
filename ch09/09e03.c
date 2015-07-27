/*
 * Ch09 Ex03 | C Programming, A Modern Approach
 *
 * Write a function gcd(m, n) that calculates the greatest common divisor of
 * the integers m and n. (Programming Project 2 in Chapter 6 describes
 * Euclid's algorithm for computing GCD.)
 */
#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
	int m, n;

	printf("Enter two integers: ");
	scanf("%d%d", &m, &n);
	printf("GCD: %d\n", gcd(m, n));

	return 0;
}

int gcd(int m, int n)
{
	int r, gcd;

	while (m != 0) {
		r = n % m;
		n = m;
		m = r;
		gcd = n;
	}

	return gcd;
}
