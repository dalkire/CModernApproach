/*
 * Ch07 Pr09 | C Programming, A Modern Approach
 *
 * Write a program that asks the user for a 12-hour time, then displays the
 * time in 24-hour form:
 * Enter a 12-hour time: 9:11 PM
 * Equivalent 24-hour time: 21:11
 *
 * See Programming Project 8 for a description of the input format.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int h, m;
	char suff;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &h, &m, &suff);

	if (toupper(suff) == 'P') {
		h += 12;
	}

	printf("Equivalent 24-hour time: %d:%.2d\n", h, m);

	return 0;
}
