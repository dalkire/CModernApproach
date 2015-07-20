/*
 * Ch07 Ex01 | C Programming, A Modern Approach
 *
 * Give the decimal value of each of the following integer constants. 
 * (a) 077
 * (b) 0x77
 * (c) 0XABC
 */
#include <stdio.h>

int main(void)
{
	printf("(a) %d\n(b) %d\n(c) %d\n", 077, 0x77, 0XABC);

	return 0;
}

/*
 * (a) 077 = 8^1 * 7 + 8^0 * 7 = 8 * 7 + 1 * 7 = 56 + 7 = 63
 * (a) = 63
 * (b) 0x77 = 16^1 * 7 + 16^0 * 7 = 16 * 7 + 1 * 7 = 112 + 7 = 119
 * (b) = 119
 * (c) 0XABC = 16^2 * 10 + 16^1 * 11 + 16^0 * 12 =
 * 256 * 10 + 16 * 11 + 1 * 12 = 2560 + 176 + 12 = 2748
 * (c) = 2748
 */
