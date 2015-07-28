/*
 * Ch09 Ex19 | C Programming, A Modern Approach
 *
 * Consider the following "mystery" function:
 * void pb(int n)
 * {
 *     if (n != 0) {
 *         pb(n / 2);
 *         putchar('0' + n % 2);
 *     }
 * }
 *
 * Trace the execution of the function by hand. Then write a program that calls
 * the function, passing it a number entered by the user. What does the function
 * do?
 */
#include <stdio.h>

void pb(int n);

int main(void)
{
	pb(7);
	printf("\n");

	return 0;
}

void pb(int n)
{
	if (n != 0) {
		pb(n / 2);
		putchar('0' + n % 2);
	}
}

/*
 * Let's evaluate void pb(int n) by hand.
 * pb(7):
 * 7 != 0
 *     pb(7 / 2) = pb(3)
 *     3 != 0
 *         pb(3 / 2) = pb(1)
 *         1 != 0
 *             pb(1 / 2) = pb(0)
 *             0 == 0
 *         putchar('0' + 1 % 2)
 *     putchar('0' + 3 % 2)
 * putchar('0' + 7 % 2)
 *
 * ====================
 * putchar('0' + 1)
 * putchar('0' + 1)
 * putchar('0' + 1)
 *
 * 111
 * The function prints the binary representation of the integer it receives.
 */
