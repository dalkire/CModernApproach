/*
 * Ch05 Pr01 | C Programming, A Modern Approach
 *
 * Write a program that calculates how many digits a number contains:
 * Enter a number: 374
 * The number 374 has 3 digits
 *
 * You may assume that the number has no more than four digits. Hint:
 * Use if statements to test the number. For example, if the number is
 * between 0 and 9, it has one digit. If the number is between 10 and
 * 99, it has two digits.
 */
#include <stdio.h>

int main(void)
{
	int n, digits;

	printf("Enter a number: ");
	scanf("%d", &n);

	if (n < 10) {
		digits = 1;
	} else if (n < 100) {
		digits = 2;
	} else if (n < 1000) {
		digits = 3;
	} else {
		digits = 4;
	}

	printf("The number %d has %d digits\n", n, digits);

	return 0;
}
