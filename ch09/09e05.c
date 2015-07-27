/*
 * Ch09 Ex05 | C Programming, A Modern Approach
 *
 * Write a function num_digits(n) that returns the number of digits in n (a
 * positive integer). Hint: To determine the number of digits in a number,
 * divide it by 10 repeatedly. When n reaches 0, the number of divisions
 * indicates how many digits n originally had.
 */
#include <stdio.h>

int num_digits(int n);

int main(void)
{
	int n;

	printf("Enter a positive integer: ");
	scanf("%d", &n);
	printf("%d has %d digits\n", n, num_digits(n));

	return 0;
}

int num_digits(int n)
{
	int num = 0;

	do {
		num++;
	}
	while ((n /= 10) != 0);

	return num;
}
