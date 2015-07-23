/*
 * Ch08 Ex04 | C Programming, A Modern Approach
 *
 * (C99) Repeat Exercise 3, but this time use a designated initializer. Make
 * the initializer as short as possible.
 */
#include <stdio.h>
#include <stdbool.h>

#define DAYS_IN_WEEK 7

int main(void)
{
	bool weekend[DAYS_IN_WEEK] = {[0] = true, [6] = true};

	for (int i = 0; i < DAYS_IN_WEEK; i++) {
		printf("%d is a weekend day: %s\n", i, weekend[i] ? "true" : "false");
	}
	
	return 0;
}
