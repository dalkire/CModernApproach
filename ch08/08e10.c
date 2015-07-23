/*
 * Ch08 Ex10 | C Programming, A Modern Approach
 *
 * Write a declaration for an 8x8 char array named chess_board. Include an
 * initializer that puts the following data into the array (one character
 * per array element):
 */
#include <stdio.h>

#define ROWS 8
#define COLS 8

int main(void)
{
	char chess_board[ROWS][COLS] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
		                        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
		                        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
		                        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
		                        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
		                        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
		                        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		                        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}};

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%c ", chess_board[i][j]);
		}
		printf("\n");
	}

	return 0;
}
