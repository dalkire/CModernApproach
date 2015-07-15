/*
 * Ch04 Pr02 | C Programming, A Modern Approach
 *
 * Extend the program in Programming Project 1 to handle three-digit
 * numbers.
 */
 #include <stdio.h>

int main(void)
{
	int n;

	printf("Enter a three-digit number: ");
	scanf("%d", &n);

	printf("The reversal is: %d%d%d\n", n % 10, n / 10 % 10, n / 100);

	return 0;
}
