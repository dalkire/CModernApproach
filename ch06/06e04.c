/*
 * Ch06 Ex04 | C Programming, A Modern Approach
 *
 * Which one of the following statements is not equivalent to the other
 * two (assuming the loop bodies are the same)?
 * (a) for (i = 0; i < 10; i++) {}
 * (b) for (i = 0; i < 10; ++i) {}
 * (c) for (i = 0; i++ < 10; ) {}
 */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; i++) {
		printf("(a) i = %d\n", i);
	}
	printf("==========\n");

	for (i = 0; i < 10; ++i) {
		printf("(b) i = %d\n", i);
	}
	printf("==========\n");

	for (i = 0; i++ < 10; ) {
		printf("(c) i = %d\n", i);
	}

	return 0;
}

/*
 * (c) is not equivalent because any use of i in the body of the loop
 * will be increased by 1. The first time through the loop body of
 * both (a) and (b), i has its initial value of zero. The first time
 * through (c), its value is already 1.
 */
