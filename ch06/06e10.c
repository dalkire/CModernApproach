/*
 * Ch06 Ex10 | C Programming, A Modern Approach
 *
 * Show how to replace a continue statement by an equivalent goto statement.
 */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; i++) {
		if (i == 5) {
			continue;
		}

		printf("%d ", i);
	}

	printf("\n----------\n");

	for (i = 0; i < 10; i++) {
		if (i == 5) {
			goto skipprint;
		}

		printf("%d ", i);
		skipprint: ;
	}

	printf("\n");

	return 0;
}
