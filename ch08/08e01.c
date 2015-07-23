/*
 * Ch08 Ex01 | C Programming, A Modern Approach
 *
 * We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate
 * the number of elements in an array. The expression sizeof(a) / sizeof(t),
 * where t is the type of a's elements, would also work, but it's considered
 * an inferior technique. Why?
 */
#include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * In order to use the expression sizeof(a) / sizeof(t), you need to know
 * the type of the elements that make up the array. It is some additional
 * overhead that is unnecessary because that info is already available in
 * sizeof(a[0]).
 */ 
