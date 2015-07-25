/*
 * Ch08 Pr13 | C Programming, A Modern Approach
 *
 * Modify Programming Project 11 from Chapter 7 so that the program labels
 * its output:
 * Enter a first and last name: Lloyd Fosdick
 * You entered the name: Fosdick, L.
 *
 * The program will need to store the last name (but not the first name) in
 * an array of characters until it can be printed. You may assume that the
 * last name is no more than 20 characters long.
 */
#include <stdbool.h>
#include <stdio.h>

#define MAX_LAST_NAME 20

int main(void)
{
	int i;
	char initial, c, last_name[MAX_LAST_NAME + 1]; /* plus newline */

	printf("Enter a first and last name: ");
	scanf(" %c", &initial);
	while (getchar() != ' ') {
		/* consume rest of first name */
	}
	scanf(" "); /* consume spaces between first and last names */
	
	for (i = 0; (c = getchar()) != '\n' && c != ' '; i++) {
		last_name[i] = c;
	}
	last_name[i] = '\n';

	printf("You entered the name: ");
	for (i = 0; last_name[i] != '\n'; i++) {
		printf("%c", last_name[i]);
	}
	printf(", %c.\n", initial);

	return 0;
}
