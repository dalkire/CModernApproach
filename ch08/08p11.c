/*
 * Ch08 Pr11 | C Programming, A Modern Approach
 *
 * Modify Programming Project 4 from Chapter 7 so that the program labels its
 * output:
 * Enter phone number: 1-800-COL-LECT
 * In numeric form: 1-800-265-5328
 *
 * The program will need to store the phone number (either in its original form
 * or in its numeric form) in an array of characters until it can be printed.
 * You may assume that the phone number is no more than 15 characters long.
 */
#include <stdio.h>

#define N 16

int main(void)
{
	char c, phone[N];

	int i;
	printf("Enter phone number: ");

	for (i = 0; (c = getchar()) != '\n'; i++) {
		phone[i] = c;
	}
	phone[i] = '\n';

	printf("In numeric form: ");
	for (i = 0; phone[i] != '\n'; i++) {
		switch (phone[i]) {
		case 'A':
		case 'B':
		case 'C':
			printf("2");
			break;
		case 'D':
		case 'E':
		case 'F':
			printf("3");
			break;
		case 'G':
		case 'H':
		case 'I':
			printf("4");
			break;
		case 'J':
		case 'K':
		case 'L':
			printf("5");
			break;
		case 'M':
		case 'N':
		case 'O':
			printf("6");
			break;
		case 'P':
		case 'Q':
		case 'R':
		case 'S':
			printf("7");
			break;
		case 'T':
		case 'U':
		case 'V':
			printf("8");
			break;
		case 'W':
		case 'X':
		case 'Y':
		case 'Z':
			printf("9");
			break;
		default:
			printf("%c", phone[i]);
			break;
		}
	}
	printf("\n");

	return 0;
}
