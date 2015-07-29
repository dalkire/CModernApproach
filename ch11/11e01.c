/*
 * Ch11 Ex01 | C Programming, A Modern Approach
 *
 * If i is a variable and p points to i, which of the following expressions
 * are aliases for i?
 * (a) *p        (b) &p        (c) *&p        (d) &*p
 * (e) *i        (f) &i        (g) *&i        (h) &*i
 */
#include <stdio.h>

int main(void)
{
	int i = 777;
	int *p = &i;

	printf("a: %d\n", *p);
	/* printf("b: %d\n", &p); */
	/* printf("c: %d\n", *&p); */
	/* printf("d: %d\n", &*p); */
	/* printf("e: %d\n", *i); */
	/* printf("f: %d\n", &i); */
	printf("g: %d\n", *&i);
	/* printf("h: %d\n", &*i); */

	return 0;
}

/*
 * (a) *p, (g) *&i
 */
