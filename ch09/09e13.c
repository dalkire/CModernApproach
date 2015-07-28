/*
 * Ch09 Ex13 | C Programming, A Modern Approach
 *
 * Write the following function, which evaluates a chess position:
 * int evaluate_position(char board[8][8]);
 *
 * board represents a configuration of pieces on a chessboard, where the
 * letters K, Q, R, B, N, P represents White pieces, and the letters k, q, r,
 * b, n, and p represent Black pieces. evaluate_position should sum the values
 * of the White pieces (Q = 9, R = 5, B = 3, N = 3, P = 1). It should also sum
 * the values of the Black pieces (done in a similar way). The function will
 * return the difference between the two numbers. This value will be positive
 * if White has an advantage in material and negative if Black has an advantage.
 */
#include <ctype.h>
#include <stdio.h>

int evaluate_position(char board[8][8]);

int main(void)
{
	char board[8][8] = {{'-', '-', '-', 'r', '-', '-', 'k', '-'},
			    {'-', '-', 'p', '-', '-', '-', 'p', '-'},
			    {'-', '-', '-', 'b', '-', '-', 'p', '-'},
			    {'-', 'p', '-', 'P', 'p', '-', '-', '-'},
			    {'p', '-', '-', '-', '-', '-', '-', '-'},
			    {'P', '-', 'P', '-', '-', '-', '-', '-'},
			    {'B', 'P', 'K', 'B', 'n', 'P', '-', '-'},
			    {'-', '-', '-', '-', '-', '-', '-', '-'}};

	printf("Board:\n");
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

	int eval = evaluate_position(board);
	printf("\nPosition Evaluation: %s%d\n", (eval < 0) ? "" : "+", eval);

	return 0;
}

int evaluate_position(char board[8][8])
{
	int eval = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			int value;

			switch (toupper(board[i][j])) {
			case 'Q':
				value = 9;
				break;
			case 'R':
				value = 5;
				break;
			case 'B':
			case 'N':
				value = 3;
				break;
			case 'P':
				value = 1;
				break;
			default:
				value = 0;
				break;
			}

			if (islower(board[i][j])) {
				value *= -1;
			}

			eval += value;
		}
	}

	return eval;
}
