/*
 * Ch08 Ex03 | C Programming, A Modern Approach
 *
 * Write a declaration of an array named weekend containing seven bool values.
 * Include an initializer that makes the first and last values true; all
 * other values should be false;
 */
#include <stdio.h>
#include <stdbool.h>

#define DAYS_IN_WEEK 7

int main(void)
{
	bool weekend[DAYS_IN_WEEK] = {true, false, false, false, false, false, true};

	for (int i = 0; i < DAYS_IN_WEEK; i++) {
		printf("%d is a weekend day: %s\n", i, weekend[i] ? "true" : "false");
	}
	
	return 0;
}
