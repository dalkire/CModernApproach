/*
 * Ch06 Ex01 | C Programming, A Modern Approach
 *
 * What does the following program fragment produce?
 * i = 1;
 * while (i <= 128) {
 *     printf("%d ", i);
 *     i *= 2;
 * }
 */
#include <stdio.h>

int main(void)
{
	int i = 1;
	while (i <= 128) {
		printf("%d ", i);
		i *= 2;
	}

	return 0;
}

/*
 * 1 2 4 8 16 32 64 128
 */
