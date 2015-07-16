/*
 * Ch04 Ex13 | C Programming, A Modern Approach
 *
 * Only one of the expressions ++i and i++ is exactly the same as
 * (i += 1): which is it? Justify your answer.
 */
#include <stdio.h>

int main(void)
{
	int i;

	i= 1;
	printf("%d\n", i += 1);

	i = 1;
	printf("%d\n", ++i);

	i = 1;
	printf("%d\n", i++);

	return 0;
}

/*
 * i++ is not exactly the same because the increment happens
 * after the statement has been evaluated, whereas for the other
 * two, the increment occurs during evaluation.
 *
 * In the code above, i += 1 is evaluated where i has an initial
 * value of 1, so the output of the print statement is 2.
 *
 * Likewise, ++i is evaluated during statement evaluation and
 * incremented before being printed, resulting in output of 2.
 *
 * i++, on the other hand, is evaluated after the print statement
 * and the output is 1.
 */
