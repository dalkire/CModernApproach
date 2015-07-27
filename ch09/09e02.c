/*
 * Ch09 Ex02 | C Programming, A Modern Approach
 *
 * Write a function check(x, y, n) that returns 1 if both x and y fall between
 * 0 and n - 1, inclusive. The function should return 0 otherwise. Assume that
 * x, y, and n are all of type int.
 */
#include <stdio.h>

int check(int x, int y, int n);

int main(void)
{
	int x = 0, y = 10, n = 11;

	printf("x: %d, y: %d, n: %d, check: %d\n", x, y, n, check(x, y, n));

	x = 17, y = 4, n = 11;
	printf("x: %d, y: %d, n: %d, check: %d\n", x, y, n, check(x, y, n));

	return 0;
}

int check(int x, int y, int n)
{
	if (x >= 0 && x < n && y >= 0 && y < n) {
		return 1;
	}

	return 0;
}
