/*
 * Ch04 Ex02 | C Programming, A Modern Approach
 *
 * If i and j are positive integers, does (-i)/j always have the
 * same value as -(i/j)? Justify your answer.
 */
 #include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * For division, the C89 standard states that if either operand
 * is negative, the result of a division can be rounded either
 * up or down.
 * Assume an implementation that rounds down.
 * If i = 2 and j = 3,
 * (-i)/j = (-2)/3 = -1, but
 * -(i/j) = -(2/3) = -(0) = 0.
 * Because -1 != 0, (-i)/j != -(i/j) for every implementation.
 */
