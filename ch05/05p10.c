/*
 * Ch05 Pr10 | C Programming, A Modern Approach
 *
 * Using the switch statement, write a program that converts a numerical
 * grade into a letter grade:
 * Enter numerical grade: 84
 * Letter grade: B
 *
 * Use the following grading scale A = 90-100, B = 80-89, C = 70-79,
 * D = 60-69, F = 0-59. Print an error message if the grade is larger than
 * 100 or less than 0. Hint: Break the grade into two digits, then use
 * a switch statement to test the ten's digit.
 */
#include <stdio.h>

int main(void)
{
	int grade;

	printf("Enter numerical grade: ");
	scanf("%d", &grade);

	if (grade > 100 || grade < 0) {
		printf("Error: Invalid grade\n");
		return 1;
	}

	switch (grade / 10) {
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Letter grade: %s\n", "F");
			break;
		case 6:
			printf("Letter grade: %s\n", "D");
			break;
		case 7:
			printf("Letter grade: %s\n", "C");
			break;
		case 8:
			printf("Letter grade: %s\n", "B");
			break;
		case 9:
			printf("Letter grade: %s\n", "A");
			break;
		default:
			printf("Letter grade: %s\n", "A");
			break;
	}

	return 0;
}
