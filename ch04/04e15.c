/*
 * Ch04 Ex15 | C Programming, A Modern Approach
 *
 * Give the values of i and j after each of the following expression
 * statements has been executed. (Assume that i has the value 1 initially
 * and j has the value 2.)
 * (a) i += j;
 * (b) i--;
 * (c) i * j / i;
 * (d) i % ++j;
 */
#include <stdio.h>

int main(void)
{
	int i = 1, j = 2;

	i += j;
	printf("%d %d\n", i, j);
	i--;
	printf("%d %d\n", i, j);
	i * j / i;
	printf("%d %d\n", i, j);
	i % ++j;
	printf("%d %d\n", i, j);

	return 0;
}

/*
 * int i = 1, j = 2; 
 * (a) i += j;
 *     i = 1 + 2 = 3; j is unchanged;
 *     3 2
 * (b) i--;
 *     i = 3 - 1 = 2; j is unchanged;
 *     2 2
 * (c) i * j / i;
 *     i and j are both unchanged;
 *     2 2
 * (d) i % ++j;
 *     i is unchanged; j = j + 1 = 3
 *     2 3
 */
