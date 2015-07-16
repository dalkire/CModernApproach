/*
 * Ch04 Ex01 | C Programming, A Modern Approach
 *
 * Show the output produced by each of the following program
 * fragments. Assume that i, j, and k are int variables.
 * (a) i = 5; j = 3;
 *     printf("%d %d", i / j, i % j);
 * (b) i = 2; j = 3;
 *     printf("%d", (i + 10) % j);
 * (c) i = 7; j = 8; k = 9;
 *     printf("%d", (i + 10) % k / j);
 * (d) i = 1; j = 2; k = 3;
 *     printf("%d", (i + 5) % (j + 2) / k);
 */
#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 5; j = 3;
	printf("%d %d\n", i / j, i % j);
	i = 2; j = 3;
	printf("%d\n", (i + 10) % j);
	i = 7; j = 8; k = 9;
	printf("%d\n", (i + 10) % k / j);
	i = 1; j = 2; k = 3;
	printf("%d\n", (i + 5) % (j + 2) / k);

	return 0;
}

/*
 * (a) 5/3, 5%3                        => 1 2
 * (b) (2+10)%3 => 12%3                => 0
 * (c) (7+10)%9/8 => (17%9)/8 => 8/8   => 1
 * (d) (1+5)%(2+2)/3 => (6%4)/3 => 2/3 => 0
 */
