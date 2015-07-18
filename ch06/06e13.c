/*
 * Ch06 Ex13 | C Programming, A Modern Approach
 *
 * Rewrite the following loop so that its body is empty:
 * for (n = 0; m > 0; n++)
 *     m /= 2;
 */
#include <stdio.h>

int main(void)
{
	int n, m;

	m = 35;
	for (n = 0; m > 0; n++) {
		m /= 2;
	}
 	printf("n = %d; m = %d\n", n, m);

	printf("----------\n");

	m = 35;
	for (n = 0; m > 0; n++, m /= 2) {}
 	printf("n = %d; m = %d\n", n, m);

	return 0;
}
