/*
 * Ch07 Pr04 | C Programming, A Modern Approach
 *
 * Write a program that translates an alphabetic phone number into numeric
 * form:
 * Enter phone number: CALLAT
 * 2255288
 *
 * (In case you don't have a telephone nearby, here are the letters on the
 * keys: 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the
 * original phone number contains nonalphabetic characters (digits or
 * punctuation, for example), leave them unchanged:
 * Enter phone number: 1-800-COL-LECT
 * 1-800-265-5328
 *
 * You may assume that any letters entered by the user are upper case.
 */
#include <stdio.h>

int main(void)
{
	char c;

	printf("Enter phone number: ");

	while ((c = getchar()) != '\n') {
		if (c == 'A' || c == 'B' || c == 'C') {
			printf("2");
		} else if (c == 'D' || c == 'E' || c == 'F') {
			printf("3");
		} else if (c == 'G' || c == 'H' || c == 'I') {
			printf("4");
		} else if (c == 'J' || c == 'K' || c == 'L') {
			printf("5");
		} else if (c == 'M' || c == 'N' || c == 'O') {
			printf("6");
		} else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S') {
			printf("7");
		} else if (c == 'T' || c == 'U' || c == 'V') {
			printf("8");
		} else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z') {
			printf("9");
		} else {
			printf("%c", c);
		}
	}

	printf("\n");

	return 0;
}
