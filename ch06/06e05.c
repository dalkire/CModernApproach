/*
 * Ch06 Ex05 | C Programming, A Modern Approach
 *
 * Which one of the following statements is not equivalent to the other
 * two (assuming the loop bodies are the same)?
 * (a) while (i < 10) {}
 * (b) for (; i < 10;) {}
 * (c) do {} while (i < 10);
 */
#include <stdio.h>

int main(void)
{
	int i = 11;

	while (i < 10) {
		printf("(a) i = %d\n", i);
	}

	for (; i < 10;) {
		printf("(b) i = %d\n", i);
	}

	do {
		printf("(c) i = %d\n", i);
	} while (i < 10);

	return 0;
}

/*
 * (c) is not equivalent because the do is evaluated prior to checking the
 * conditional expression. So if i = 11, (c) will still run the loop body once.
 */
