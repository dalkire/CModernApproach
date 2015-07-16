/*
 * Ch04 Ex07 | C Programming, A Modern Approach
 *
 * The algorithm for computing the UPC check digit ends with
 * the following steps:
 * Subtract 1 from the total.
 * Compute the remainder when the adjusted total is divided
 * by 10.
 * Subtract the remainder from 9.
 * It's tempting to try to simplify the algorithm by using
 * these steps instead:
 * Compute the remainder when the total is divided by 10.
 * Subtract the remainder from 10.
 * Why doesn't this technique work?
 */
#include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * Let total = 10:
 * 9 - ((total - 1) % 10) = 9 - (9 % 10) = 9 - 9 = 0
 * 10 - (total % 10) = 10 - (10 % 10) = 10 - 0 = 10
 */
