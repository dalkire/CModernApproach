/*
 * Ch02 Ex01 | C Programming, A Modern Approach
 *
 * Create and run Kernighan and Ritchie's famous
 * "hello, world" program.
 *
 * Do you get a warning message from the compiler?
 * If so, what's needed to make it go away?
 */
#include <stdio.h>

int main(void)
{
	printf("hello, world\n");
}

/*
 * No warning messages using:
 * gcc -Wall -g 02e01.c -o bin/02e01
 */
