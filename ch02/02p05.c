/*
 * Ch02 Pr05 | C Programming, A Modern Approach
 *
 * Write a program that asks the user to enter a value for x and
 * then displays the value of the following polynomial:
 * 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6
 * Hint: C doesn't have an exponentiation operator, so you'll need to
 * multiply x by itself repeatedly in order to compute the powers of x.
 * (For example, x*x*x is x cubed.)
 */
#include <stdio.h>

int main(void)
{
	float x;

	printf("Enter a value for x: ");
	scanf("%f", &x);
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 =  %.2f\n",
	       3 * x*x*x*x*x + 2 * x*x*x*x - 5 * x*x*x - x*x + 7 * x - 6);

	return 0;
}
