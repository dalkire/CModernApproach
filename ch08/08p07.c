/*
 * Ch08 Pr07 | C Programming, A Modern Approach
 *
 * Write a program that reads a 5x5 array of integers and then prints the row
 * sums and column sums:
 * Enter row 1: 8 3 9 0 10
 * Enter row 2: 3 5 17 1 1
 * Enter row 3: 2 8 6 23 1
 * Enter row 4: 15 7 3 2 9
 * Enter row 5: 6 14 2 6 0
 *
 * Row totals: 30 27 40 36 28
 * Column totals: 34 37 37 32 21
 */
#include <stdio.h>

#define ROWS 5
#define COLS 5

int main(void)
{
	int a[ROWS][COLS], row_totals[ROWS] = {0}, col_totals[COLS] = {0};

	for (int i = 0; i < ROWS; i++) {
		printf("Enter row %d: ", i + 1);
		scanf("%d%d%d%d%d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
	}

	
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			row_totals[i] += a[i][j];
			col_totals[j] += a[i][j];
		}
	}

	printf("\nRow totals:");
	for (int i = 0; i < ROWS; i++) {
		printf(" %d", row_totals[i]);
	}

	printf("\nColumn totals:");
	for (int i = 0; i < COLS; i++) {
		printf(" %d", col_totals[i]);
	}
	printf("\n");

	return 0;
}
