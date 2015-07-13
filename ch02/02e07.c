/*
 * Ch02 Ex07 | C Programming, A Modern Approach
 *
 * Which of the following are keywords in C?
 * (a) for
 * (b) If
 * (c) main
 * (d) printf
 * (e) while
 */
#include <stdio.h>

int main(void)
{
	int for = 1;
	int If = 1;
	int main = 1;
	int printf = 1;
	int while = 1;

	printf("%d %d %d %d %d\n", for, If, main, printf, while);

	return 0;
}

/*
 * (a) for, and (e) while, are reserved keywords which you cannot
 * use to name an identifier. (d) printf, is allowed but that breaks
 * any call to the library function printf().
 *
 * (b) If, and (c) main, are allowed as identifiers.
 */
