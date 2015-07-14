/*
 * Ch03 Ex04 | C Programming, A Modern Approach
 *
 * Suppose that we call scanf as follows:
 * scanf("%d%f%d", &i, &x, &j);
 * If the user enters 10.3 5 6
 * what will be the values of i, x, and j after the call?
 * (Assume that i and j are int variables and x is a float variable.)
 */
#include <stdio.h>

int main(void)
{
	int i, j;
	float x;

	printf("Enter 10.3 5 6: ");
	scanf("%d%f%d", &i, &x, &j);
	printf("i: %d, x: %f, j: %d\n", i, x, j);

	return 0;
}

/*
 * scanf sees 10, a . is not part of a decimal, so i = 10
 * scanf sees .3, a space ends the float, so x = 0.3
 * scanf sees  5, a space ends the decimal, so j = 5
 */ 
