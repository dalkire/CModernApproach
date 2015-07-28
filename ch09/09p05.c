/*
 * Ch09 Pr05 | C Programming, A Modern Approach
 *
 * Modify Programming Project 17 from Chapter 8 so that it includes the
 * following functions:
 * void create_magic_square(int n, int magic_square[n][n]);
 * void print_magic_square(int n, int magic_square[n][n]);
 *
 * After obtaining the number n from the user, main will call
 * create_magic_square, passing it an n x n array that is declared inside
 * main. create_magic_square will fill the array with the numbers 1, 2, ...,
 * n^2 as described in the original project. main will then call
 * print_magic_square, which will display the array in the format described
 * in the original project. Note: If your compiler doesn't support variable-
 * length arrays, declare the array in main to be 99 x 99 instead of n x n
 * and use the following prototypes instead:
 * void create_magic_square(int n, int magic_square[99][99]);
 * void print_magic_square(int n, int magic_square[99][99]);
 */
#include <stdio.h>

#define NEXT_ROW (curr_row - 1) < 0 ? n - 1 : curr_row - 1
#define NEXT_COL (curr_col + 1) % n

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void)
{
	int n;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	int magic_square[n][n];

	create_magic_square(n, magic_square);
	print_magic_square(n, magic_square);

	return 0;
}

void create_magic_square(int n, int magic_square[n][n])
{
	int curr_row = 0, curr_col = n / 2;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			magic_square[i][j] = 0;
		}
	}

	for (int i = 1; i <= n * n; i++) {
		magic_square[curr_row][curr_col] = i;

		if (magic_square[NEXT_ROW][NEXT_COL] != 0) {
			curr_row = (curr_row + 1) % n;
		} else {
			curr_row = NEXT_ROW;
			curr_col = NEXT_COL;
		}
	}
}

void print_magic_square(int n, int magic_square[n][n])
{
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%4d", magic_square[i][j]);
		}
		printf("\n");
	}

}
