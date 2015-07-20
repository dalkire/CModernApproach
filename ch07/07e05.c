/*
 * Ch07 Ex05 | C Programming, A Modern Approach
 *
 * Which one of the following is not a legal way to write the number 65?
 * (Assume that the character set is ASCII.)
 * (a) 'A'
 * (b) 0b1000001
 * (c) 0101
 * (d) 0x41
 */
#include <stdio.h>

int main(void)
{
	printf("(a) %d\n", 'A');
	printf("(b) %d\n", 0b1000001);
	printf("(c) %d\n", 0101);
	printf("(d) %d\n", 0x41);

	return 0;
}

/*
 * After reading the chapter, I would expect (b) to be illegal because there
 * is no mention of creating binary numbers by beginning them with 0b, but
 * they all compiled without warning and gave the proper results.
 */
