/*
 * Ch02 Pr06 | C Programming, A Modern Approach
 *
 * Modify the program of Programming Project 5 so that the
 * polynomial is evaluated using the following formula:
 * ((((3x + 2)x - 5)x - 1)x + 7)x - 6
 * Note that the modified program performs fewer multiplications.
 * This technique for evaluating polynomials is known as Horner's Rule.
 */
 #include <stdio.h>

int main(void)
{
	float x;

	printf("Enter a value for x: ");
	scanf("%f", &x);
	printf("3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 =  %.2f\n",
	       ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6);

	return 0;
}
