/*
 * Ch10 Pr07 | C Programming, A Modern Approach
 *
 * Write a program that prompts the user for a number and then displays the
 * number, using characters to simulate the effect of a seven-segment display:
 *
 * Enter a number: 491-9014
 *      _       _   _
 * |_| |_|   | |_| | |   | |_|
 *   |  _|   |  _| |_|   |   |
 *
 * Characters other than digits should be ignored. Write the program so that
 * the maximum number of digits is controlled by a macro named MAX_DIGITS,
 * which has the value 10. If the number contains more than this number of
 * digits, the extra digits are ignored. Hints: Use two external arrays.
 * One is the segments array (see Exercise 6 in Chapter 8), which stores
 * data representing the correspondence between digits and segments. The
 * other array, digits, will be an array of characters with 3 rows (since
 * each segmented digit is three characters high) and MAX_DIGITS * 4 columns
 * (digits are three characters wide, but a space is needed between digits
 * for readability). Write your program as four functions: main,
 * clear_digits_array, process_digit, and print_digits_array. Here are the
 * prototypes for the latter three functions:
 *
 * void clear_digits_array(void);
 * void process_digit(int digit, int position);
 * void print_digits_array(void);
 *
 * clear_digits_array will store blank characters into all elements of the
 * digits array, process digit will store the seven-segment representation
 * of digit into a specified position in the digits array (positions range
 * from 0 to MAX_DIGITS - 1). print_digits_array will display the rows of
 * the digits array, each on a single line, producing output such as that
 * shown in the example.
 */
#include <ctype.h>
#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},  // 0
			     {0, 1, 1, 0, 0, 0, 0},  // 1
			     {1, 1, 0, 1, 1, 0, 1},  // 2
			     {1, 1, 1, 1, 0, 0, 1},  // 3
			     {0, 1, 1, 0, 0, 1, 1},  // 4
			     {1, 0, 1, 1, 0, 1, 1},  // 5
			     {1, 0, 1, 1, 1, 1, 1},  // 6
			     {1, 1, 1, 0, 0, 0, 0},  // 7
			     {1, 1, 1, 1, 1, 1, 1},  // 8
			     {1, 1, 1, 1, 0, 1, 1}}; // 9
char digits[3][MAX_DIGITS * 4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);


int main(void)
{
	char ch;
	int position = 0;

	clear_digits_array();

	printf("Enter a number: ");
	while ((ch = getchar()) != '\n') {
		if (isdigit(ch) && position < MAX_DIGITS) {
			process_digit(digittoint(ch), position);
			position++;
		}
	}
	print_digits_array();

	return 0;
}

void clear_digits_array(void)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < MAX_DIGITS * 4; j++)
			digits[i][j] = ' ';
}

void process_digit(int digit, int position)
{
	int offset = 4 * position;

	if (segments[digit][0])
		digits[0][1 + offset] = '_';
	if (segments[digit][1])
		digits[1][2 + offset] = '|';
	if (segments[digit][2])
		digits[2][2 + offset] = '|';
	if (segments[digit][3])
		digits[2][1 + offset] = '_';
	if (segments[digit][4])
		digits[2][0 + offset] = '|';
	if (segments[digit][5])
		digits[1][0 + offset] = '|';
	if (segments[digit][6])
		digits[1][1 + offset] = '_';
}

void print_digits_array(void)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < MAX_DIGITS * 4; j++)
			printf("%c", digits[i][j]);
		printf("\n");
	}
}
