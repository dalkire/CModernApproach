/*
 * Ch06 Pr02 | C Programming, A Modern Approach
 *
 * Write a program that asks the user to enter two integers, then
 * calculates and displays the greatest common divisor (GCD):
 * Enter two integers: 12 28
 * Greatest common divisor: 4
 *
 * Hint: The classic algorithm for computing the GCD, known as Euclid's
 * algorithm, goes as follows: Let m and n be variables containing the
 * two numbers. If n is 0, then stop: m contains the GCD. Otherwise,
 * compute the remainder when m is divided by n. Copy n into m and copy
 * the remainder into n. Then repeat the process, starting with testing
 * whether n is 0.
 */
#include <stdio.h>

int main(void)
{
	int n, m, r, gcd;
	
	printf("Enter two integers: ");
	scanf("%d%d", &n, &m);

	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
		gcd = m;
	}

	printf("Greatest common divisor: %d\n", gcd);

	return 0;
}
