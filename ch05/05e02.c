/*
 * Ch05 Ex02 | C Programming, A Modern Approach
 *
 * The following program fragments illustrate the logical operators.
 * Show the output produced by each, assuming i, j, and k are integers.
 * (a) i = 10; j = 5;
 *     printf("%d", !i < j);
 * (b) i = 2; j = 1;
 *     printf("%d", !!i + !j);
 * (c) i = 5; j = 0; k = -5;
 *     printf("%d", i && j || k);
 * (d) i = 1; j = 2; k = 3;
 *     printf("%d", i < j || k);
 */
#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 10; j = 5;
	printf("%d\n", !i < j);
	i = 2; j = 1;
	printf("%d\n", !!i + !j);
	i = 5; j = 0; k = -5;
	printf("%d\n", i && j || k);
	i = 1; j = 2; k = 3;
	printf("%d\n", i < j || k);

	return 0;
}

/*
 * (a) i = 10; j = 5;
 *     !i < j => 0 < 5 => 1
 *     1
 * (b) i = 2; j = 1;
 *     !!i + !j => !0 + 0 => 1 + 0 => 1
 *     1
 * (c) i = 5; j = 0; k = -5;
 *     i && j || k => (5 && 0) || -5 => 0 || -5 => 1
 *     1
 * (d) i = 1; j = 2; k = 3;
 *     i < j || k => (1 < 2) || 3 => 1 || 3 => 1
 *     1
 */ 
