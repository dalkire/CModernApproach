/*
 * Ch07 Pr06 | C Programming, A Modern Approach
 *
 * Write a program that prints the values of sizeof(int), sizeof(short),
 * sizeof(long), sizeof(float), sizeof(double), sizeof(long double).
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	printf("sizeof(int): %lu\n", sizeof(int));
	printf("sizeof(short): %lu\n", sizeof(short));
	printf("sizeof(long): %lu\n", sizeof(long));
	printf("sizeof(float): %lu\n", sizeof(float));
	printf("sizeof(double): %lu\n", sizeof(double));
	printf("sizeof(long double): %lu\n", sizeof(long double));

	return 0;
}
