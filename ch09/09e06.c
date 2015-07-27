/*
 * Ch09 Ex06 | C Programming, A Modern Approach
 *
 * Write a function digit(n, k) that returns the kth digit (from the right) in
 * n (a positive integer). For example, digit(829, 1) returns 9, digit(829, 2)
 * returns 2, and digit(829, 3) returns 8. If k is greater than the number of
 * digits in n, have the function return 0.
 */
#include <stdio.h>

int digit(int n, int k);

int main(void)
{
	int n, k;

	printf("Enter a positive integer: ");
	scanf("%d", &n);
	printf("Enter which digit you want (nth from right): ");
	scanf("%d", &k);

	printf("Digit at position %d: %d\n", k, digit(n, k));

	return 0;
}

/*
 * Return kth digit of positive integer n.
 */
int digit(int n, int k)
{
	int d;

	while (k-- > 0) {
		d = n % 10;
		n /= 10;
	}

	return d;
}
