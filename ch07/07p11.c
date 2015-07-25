/*
 * Ch07 Pr11 | C Programming, A Modern Approach
 *
 * Write a program that takes a first name and last name entered by the user
 * and displays the last name, a comma, and the first initial, followed by
 * a period:
 * Enter a first and last name: Lloyd Fosdick
 * Fosdick, L.
 *
 * The user's input may contain extra spaces before the first name, between
 * the first and last names, and after the last name.
 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char initial, c;

	printf("Enter a first and last name: ");
	scanf(" %c", &initial);
	while (getchar() != ' ') {
		/* consume rest of first name */
	}
	scanf(" "); /* consume spaces between first and last names */
	
	while ((c = getchar()) != '\n' && c != ' ') {
		printf("%c", c);
	}

	printf(" %c.\n", initial);

	return 0;
}
