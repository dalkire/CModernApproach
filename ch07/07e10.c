/*
 * Ch07 Ex10 | C Programming, A Modern Approach
 *
 * Suppose that i is a variable of type int, j is a variable of type long,
 * and k is a variable of unsigned int. What is the type of the expression
 * i + (int) j * k?
 */
#include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * j is explicitly cast as an int and then implicitly cast as an unsigned int
 * because of multiplication with k. Then i is implicitly cast as an unsigned
 * int as a result of the addition.
 */
