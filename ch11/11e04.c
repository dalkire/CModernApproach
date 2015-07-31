/*
 * Ch11 Ex04 | C Programming, A Modern Approach
 *
 * Write the following function:
 *
 * void swap(int *p, int *q);
 *
 * When passed the address of two variables, swap should exchange the values
 * of the variables:
 *
 * swap(&i, &j);    // exchanges values of i and j
 */
#include <stdio.h>

void swap(int *p, int *q);

int main(void)
{
	int i = 5, j = 7;

	printf("Before swap: i=%d, j=%d\n", i, j);
	swap(&i, &j);
	printf("After  swap: i=%d, j=%d\n", i, j);

	return 0;
}

void swap(int *p, int *q)
{
	int tmp = *p;
	*p = *q;
	*q = tmp;
}
