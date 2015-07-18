/*
 * Ch06 Ex03 | C Programming, A Modern Approach
 *
 * What output does the following for statement produce?
 * for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
 *     printf("%d ", i);
 */
#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) {
		printf("%d ", i);
	}

	return 0;
}

/*
 * Notice the comma operator in the evaluation expression. The result of
 * the first expression of the comma operator is discarded. Since i > 0
 * has no side effects, it is useless as part of the evaluation expression,
 * which is equivalent to just j > 0.
 *
 * i = 5; j = 5 - 1 = 4; Is j > 0? Yes.
 * Print i: 5 
 * --i => --5 = 4; j = 4 - 1 = 3; Is j > 0? Yes.
 * Print i: 4 
 * --i => --4 = 3; j = 3 - 1 = 2; Is j > 0? Yes.
 * Print i: 3 
 * --i => --3 = 2; j = 2 - 1 = 1; Is j > 0? Yes.
 * Print i: 2 
 * --i => --2 = 1; j = 1 - 1 = 0; Is j > 0? No.
 * End loop.
 *
 * 5 4 3 2 
 */
