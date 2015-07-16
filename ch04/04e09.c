/*
 * Ch04 Ex09 | C Programming, A Modern Approach
 *
 * Show the output produced by each of the following program
 * fragments. Assume that i, j, and k are int variables.
 * (a) i = 7; j = 8;
 *     i *= j + 1;
 *     printf("%d %d", i, j);
 * (b) i = j = k = 1;
 *     i += j += k;
 *     printf("%d %d %d", i, j, k);
 * (c) i = 1; j = 2; k = 3;
 *     i -= j -= k;
 *     printf("%d %d %d", i, j, k);
 * (d) i = 2; j = 1; k = 0;
 *     i *= j *= k;
 *     printf("%d %d %d", i, j, k);
 */
#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 7; j = 8;
	i *= j + 1;
	printf("%d %d\n", i, j);
	i = j = k = 1;
	i += j += k;
	printf("%d %d %d\n", i, j, k);
	i = 1; j = 2; k = 3;
	i -= j -= k;
	printf("%d %d %d\n", i, j, k);
	i = 2; j = 1; k = 0;
	i *= j *= k;
	printf("%d %d %d\n", i, j, k);
	

	return 0;
}

/*
 * (a) j = 8; i = 7 * 9 = 63;
 *     57 8
 * (b) k = 1; j = 1 + 1 = 2; i = 1 + 2 = 3;
 *     3 2 1
 * (c) k = 3; j = 2 - 3 = -1; i = 1 - (-1) = 2;
 *     2 -1 3
 * (d) k = 0; j = 1 * 0 = 0; i = 2 * 0 = 0;
 *     0 0 0
 */
