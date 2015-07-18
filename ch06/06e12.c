/*
 * Ch06 Ex12 | C Programming, A Modern Approach
 *
 * The following "prime-testing" loop appeared in Section 6.4 as an example:
 * for (d = 2; d < n; d++)
 *     if (n % d == 0)
 *         break;
 *
 * This loop isn't very efficient. It's not necessary do divide n by all
 * numbers between 2 and n - 1 to determine whether it's prime. In fact, we
 * need only check divisors up to the square root of n. Modify the loop to
 * take advantage of this fact. Hint: Don't try to compute the square root
 * of n; instead compare d * d with n.
 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int n, d;
	bool prime = true;

	printf("Enter a number to find out if it is prime: ");
	scanf("%d", &n);

	for (d = 2; d * d < n; d++) {
		if (n % d == 0) {
			prime = false;
		}
	}

	printf("%d is%s prime\n", n, prime ? "" : " NOT");

	return 0;
}
