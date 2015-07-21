/*
 * Ch07 Ex14 | C Programming, A Modern Approach
 *
 * Does the following statement always compute the fractional part of f
 * correctly (assuming that f and frac_part are float variables)?
 * frac_part = f - (int) f;
 *
 * If not, what is the problem?
 */
#include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * If the machine implementation is such that the size of float is larger
 * than the size of int, then casting a large enough float into an int
 * will result in overflow because there are not enough bits to hold
 * the integer part of the float. The subtraction that follows will not have
 * the desired result.
 */
