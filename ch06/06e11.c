/*
 * Ch06 Ex11 | C Programming, A Modern Approach
 *
 * What output does the following program fragment produce?
 * sum = 0;
 * for (i = 0; i < 10; i++) {
 *     if (i % 2)
 *         continue;
 *     sum += i;
 * }
 * printf("%d\n", sum);
 */
#include <stdio.h>

int main(void)
{
	int i, sum;

	sum = 0;
	for (i = 0; i < 10; i++) {
		if (i % 2) {
			continue;
		}

		sum += i;
	}

	printf("%d\n", sum);

	return 0;
}

/*
 * i = 0; Is i < 10? Yes.
 * i % 2 => 0 % 2 = 0;
 * sum = sum + i => sum = 0 + 0 => sum = 0;
 * i++ => i = 1;
 * i = 1; Is i < 10? Yes.
 * i % 2 => 1 % 2 = 1; Continue;
 * i++ => i = 2;
 * i = 2; Is i < 10? Yes.
 * i % 2 => 2 % 2 = 0;
 * sum = sum + i => sum = 0 + 2 => sum = 2;
 *
 * The loop body gets skipped for odd values of i. Even values get added
 * to the sum until the limit (< 10) is reached, so that:
 * sum = 0 + 2 + 4 + 6 + 8 = 20;
 * 20
 */
