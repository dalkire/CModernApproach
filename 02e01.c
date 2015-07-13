/*
 * Ch02 Ex1 | C Programming, A Modern Approach
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
 * gcc -Wall -g 2e01.c -o bin/2e01
 */
