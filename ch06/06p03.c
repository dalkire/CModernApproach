/*
 * Ch06 Pr03 | C Programming, A Modern Approach
 *
 * Write a program that asks the user to enter a fraction, then reduces
 * the fraction to the lowest terms:
 * Enter a fraction: 6/12
 * In lowest terms: 1/2
 *
 * Hint: To reduce a fraction to lowest terms, first compute the GCD of
 * the numerator and denominator. Then divide both the numerator and
 * denominator by the GCD.
 */
#include <stdio.h>

int main(void)
{
	int numerator, denominator;
	int n, m, r, gcd;
	
	printf("Enter a fraction: ");
	scanf("%d/%d", &numerator, &denominator);

	n = numerator;
	m = denominator;

	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
		gcd = m;
	}

	printf("In lowest terms: %d/%d\n", numerator / gcd, denominator / gcd);

	return 0;
}
