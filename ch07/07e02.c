/*
 * Ch07 Ex02 | C Programming, A Modern Approach
 *
 * Which of the following are not legal constants in C? Classify each legal
 * constant as either integer or floating-point.
 * (a) 010E2
 * (b) 32.1E+5
 * (c) 0790
 * (d) 100_000
 * (e) 3.978e-2
 */
#include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * (a) 010E2 is legal. The presence of the exponent indicates type float and
 *     negates the presence of the leading zero, which would otherwise
 *     indicate an octal int.
 * (b) 32.1E+5 is a legal floating-point number.
 * (c) 0790 is illegal. The leading zero indicates octal, but octal only has
 *     digits from 0 to 7.
 * (d) 100_000 is illegal. Underscores are not legal in numerical definitions.
 * (e) 3.978e-2 is a legal floating-point number.
 */
