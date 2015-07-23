/*
 * Ch07 Pr15 | C Programming, A Modern Approach
 *
 * Write a program that computes the factorial of a positive integer:
 * Enter a positive integer: 6
 * Factorial of 6: 720
 *
 * (a) Use a short variable to store the value of the factorial. What is the
 *     the largest value of n for which the program correctly prints the
 *     factorial of n?
 * (b) Repeat part (a), using an int variable instead.
 * (c) Repeat part (a), using a long variable instead.
 * (d) Repeat part (a), using a long long variable instead (if your compiler
 *     supports the long long type).
 * (e) Repeat part (a), using a float variable instead.
 * (f) Repeat part (a), using a double variable instead.
 * (g) Repeat part (a), using a long double variable instead.
 *
 * In cases (e)-(g), the program will display a close approximation of the
 * factorial, not necessarily the exact value.
 */
#include <stdio.h>

int main(void)
{
	int n;
	long double fact = 1.0;

	printf("Enter a positive integer: ");
	scanf("%d", &n);

	for (int i = n; i > 0; i--) {
		fact *= i;
	}

	printf("Factorial of %d: %Lf\n", n, fact);

	return 0;
}

/*
 * (a) Largest short factorial: 7 => 5040
 * (b) Largest int factorial: 12 => 479001600
 * (c) Largest long factorial: 20 => 2432902008176640000
 * (d) long long is the same as long on my machine (both 8 bytes)
 * (e) Largest float factorial: 34 => 2.95232883843762e+38
 * (f) Largest double factorial: 170 => 7.257415615308e+306
 * (g) Largest long double factorial: 1754 => 1.97926189010501e+4930
 */ 
