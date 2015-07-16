/*
 * Ch05 Ex01 | C Programming, A Modern Approach
 *
 * The following program fragments illustrate the relational and equality
 * operators. Show the output produced by each, assuming that i, j,  and
 * k are int variables.
 * (a) i = 2; j = 3;
 *     k = i * j == 6;
 *     printf("%d", k);
 * (b) i = 5; j = 10; k = 1;
 *     printf("%d", k > i < j);
 * (c) i = 3; j = 2; k = 1;
 *     printf("%d", i < j == j < k);
 * (d) i = 3; j = 4; k = 5;
 *     printf("%d", i % j + i < k);
 */
#include <stdio.h>

int main(void)
{
	int i, j, k;

	i = 2; j = 3;
	k = i * j == 6;
	printf("%d\n", k);

	i = 5; j = 10; k = 1;
	printf("%d\n", k > i < j);

	i = 3; j = 2; k = 1;
	printf("%d\n", i < j == j < k);

	i = 3; j = 4; k = 5;
	printf("%d\n", i % j + i < k);

	return 0;
}

/*
 * Relational operators have lower precedent than arithmetic operators,
 * and equality operators are lower still.
 * (a) i = 2; j = 3;
 *     k = 2 * 3 == 6 => 6 == 6 => 1
 *     1
 * (b) i = 5; j = 10; k = 1;
 *     k > i < j => (1 > 5) < 10 => 0 < 10 => 1
 *     1
 * (c) i = 3; j = 2; k = 1;
 *     i < j == j < k => (3 < 2) == (2 < 1) => 0 == 0 => 1
 *     1
 * (d) i = 3; j = 4; k = 5;
 *     i % j + i < k => ((3 % 4) + 3) < 5 => (3 + 3) < 5 => 0
 *     0
 */ 
