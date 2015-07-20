/*
 * Ch06 Pr11 | C Programming, A Modern Approach
 *
 * The value of the mathematical constant e can be expressed in an infinite
 * series:
 * e = 1 + 1/1! + 1/2! + 1/3! + ...
 *
 * Write a program that approximates e by computing the value of
 * 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
 * where n is an integer entered by the user.
 */
#include <stdio.h>

int main(void)
{
	int n, i_fact, i, j;
	float e = 1;

	printf("Enter an integer for approximating e: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (i_fact = i, j = i; j > 1; j--) {
			i_fact *= j - 1;
		}

		e += 1.0f/i_fact;
	}

	printf("e = %f\n", e);

	return 0;
}
