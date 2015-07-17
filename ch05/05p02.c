/*
 * Ch05 Pr02 | C Programming, A Modern Approach
 *
 * Write a program that asks the user for a 24-hour time, then displays
 * the time in a 12-hour form:
 * Enter a 24-hour time: 21:11
 * Equivalent 12-hour time: 9:11 PM
 *
 * Be careful not to display 12:00 as 0:00.
 */
#include <stdio.h>

int main(void)
{
	int h, m;
	char *suffix = "AM";

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);

	if (h > 12) {
		h %= 12;
		suffix = "PM";
	}

	if (h == 0) {
		h = 12;
	}

	printf("Equivalent 12-hour time: %d:%d %s\n", h, m, suffix);

	return 0;
}
