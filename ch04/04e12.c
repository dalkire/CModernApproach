/*
 * Ch04 Ex12 | C Programming, A Modern Approach
 *
 * Show the output produced by each of the following program
 * fragments. Assume that i and j are int variables.
 * (a) i = 5;
 *     j = ++i * 3 - 2;
 *     printf("%d %d\n", i, j);
 * (b) i = 5;
 *     j = 3 - 2 * i++;
 *     printf("%d %d\n", i, j);
 * (c) i = 7;
 *     j = 3 * i-- + 2;
 *     printf("%d %d\n", i, j);
 * (d) i = 7;
 *     j = 3 + --i * 2;
 *     printf("%d %d\n", i, j);
 */
#include <stdio.h>

int main(void)
{
	int i, j;

	i = 5;
	j = ++i * 3 - 2;
	printf("%d %d\n", i, j);
	i = 5;
	j = 3 - 2 * i++;
	printf("%d %d\n", i, j);
	i = 7;
	j = 3 * i-- + 2;
	printf("%d %d\n", i, j);
	i = 7;
	j = 3 + --i * 2;
	printf("%d %d\n", i, j);

	return 0;
}

/*
 * (a) i = 5; j = 6 * 3 - 2 = 16; i = 6;
 *     6 16
 * (b) i = 5; j = 3 - 2 * 5 = -7; i = 6;
 *     6 -7
 * (c) i = 7; j = 3 * 7 + 2 = 23; i = 6;
 *     6 23
 * (d) i = 7; j = 3 + 6 * 2 = 15; i = 6;
 *     6 15
 */
