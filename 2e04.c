/*
 * Ch2 Ex04 | C Programming, A Modern Approach
 *
 * Write a program that declares several int and float variables -
 * without initializing them - and then prints their values.
 * Is there any pattern to the values? (Usually there isn't.)
 */
#include <stdio.h>

int main(void)
{
	int a, b, c;
	float x, y, z;

	printf("a: %d\n", a);
	printf("b: %d\n", b);
	printf("c: %d\n", c);
	printf("x: %.3f\n", x);
	printf("y: %.3f\n", y);
	printf("z: %.3f\n", z);

	return 0;
}

/*
 * There was no noticeable pattern with the ints,
 * but the floats were all 0.000.
 */
