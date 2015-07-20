/*
 * Ch07 Ex09 | C Programming, A Modern Approach
 *
 * Suppose that i and j are variables of type int. What is the type of the
 * expression i / j + 'a'?
 */
#include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * The char type is just an 8-bit integer, so the conversion is legal. Since
 * char is narrower than int, the resulting type would have to be int.
 */
