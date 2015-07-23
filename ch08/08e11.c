/*
 * Ch08 Ex11 | C Programming, A Modern Approach
 *
 * Write a program fragment that declares an 8x8 char array named checker_board
 * and then uses a loop to store the following data into the array (one
 * character per array element):
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R  
 * R B R B R B R B
 * B R B R B R B R  
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 *
 * Hint: The element in row i, column j, should be the letter B if i + j is an
 * even number.
 */
#include <stdio.h>

#define ROWS 8
#define COLS 8

int main(void)
{
	char checker_board[ROWS][COLS];

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			if ((i + j) % 2 == 0) {
				checker_board[i][j] = 'B';
			} else {
				checker_board[i][j] = 'R';
			}
		}
	}

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%c ", checker_board[i][j]);
		}
		printf("\n");
	}

	return 0;
}
