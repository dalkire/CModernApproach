/*
 * Ch04 Ex10 | C Programming, A Modern Approach
 *
 * Show the output produced by each of the following program
 * fragments. Assume that i and j are int variables.
 * (a) i = 6;
 *     j = i += i;
 *     printf("%d %d", i, j);
 * (b) i = 5;
 *     j = (i -= 2) + 1;
 *     printf("%d %d", i, j);
 * (c) i = 7;
 *     j = 6 + (i = 2.5);
 *     printf("%d %d", i, j);
 * (d) i = 2; j = 8;
 *     j = (i = 6) + (j = 3);
 *     printf("%d %d", i, j);
 */
 #include <stdio.h>

int main(void)
{
	int i, j;

	i = 6;
	j = i += i;
	printf("%d %d\n", i, j);
	i = 5;
	j = (i -= 2) + 1;
	printf("%d %d\n", i, j);
	i = 7;
	j = 6 + (i = 2.5);
	printf("%d %d\n", i, j);
	i = 2; j = 8;
	j = (i = 6) + (j = 3);
	printf("%d %d\n", i, j);
	

	return 0;
}

/*
 * (a) j = i = i + 6 => j = 12; i = 12;
 *     12 12
 * (b) j = (i = i - 2) + 1 => j = (i = 3) + 1 => j = 4; i = 3;
 *     3 4
 * (c) j = 6 + (i = 2.5) => j = 6 + 2 => j = 8; i = 2;
 *     2 8
 * (d) j = (i = 6) + (j = 3) => j = 6 + 3; j = 9; i = 6;
 *     6 9
 */
