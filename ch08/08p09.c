/*
 * Ch08 Pr09 | C Programming, A Modern Approach
 *
 * Write a program that generates a "random walk" across a 10x10 array. The
 * array will contain characters (all '.' initially). The program must randomly
 * "walk" from element to element, always going up, down, left, or right by
 * one element. The elements visited by the program will be labeled with the
 * letters A through Z, in the order visited. Here's an example of the desired
 * output:
 * A . . . . . . . . .
 * B C D . . . . . . .
 * . F E . . . . . . .
 * H G . . . . . . . .
 * I . . . . . . . . .
 * J . . . . . . . Z .
 * K . . R S T U V Y .
 * L M P Q . . . W X .
 * . N O . . . . . . .
 * . . . . . . . . . .
 *
 * Hint: Use the srand and rand functions (see deal.c) to generate random
 * numbers. After generating a number, look at its remainder when divided
 * by 4. There are four possible values for the remainder - 0, 1, 2, and 3 -
 * indicating the direction of the next move. Before performing a move, check
 * that (a) it won't go outside the array, and (b) it doesn't take us to an
 * element that already has a letter assigned. If either condition is violated,
 * try moving in another direction. If all four directions are blocked, the
 * program must terminate.
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 10
#define COLS 10
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3
#define NUM_DIRECTIONS 4

#define UP_AVAILABLE curr_row - 1 >= 0 && a[curr_row - 1][curr_col] == '.'
#define RIGHT_AVAILABLE curr_col + 1 < COLS && a[curr_row][curr_col + 1] == '.'
#define DOWN_AVAILABLE curr_row + 1 < ROWS && a[curr_row + 1][curr_col] == '.'
#define LEFT_AVAILABLE curr_col - 1 >= 0 && a[curr_row][curr_col - 1] == '.'

//          0
//        3   1
//          2

int main(void)
{
	int a[ROWS][COLS], curr_row = -1, curr_col = 0, num_tried = 0;
	bool tried[4] = {false};

	srand((unsigned) time(NULL));

	/* Initialize array. */
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			a[i][j] = '.';
		}
	}

	for (char letter = 'A'; letter <= 'Z'; letter++) {
		while (num_tried < NUM_DIRECTIONS) {
			int dir = rand() % NUM_DIRECTIONS;

			if (dir == UP && !tried[UP]) {
				if (UP_AVAILABLE) {
					a[--curr_row][curr_col] = letter;
					break;
				} else {
					tried[UP] = true;
					num_tried++;
				}
			} else if (dir == RIGHT && !tried[RIGHT]) {
				if (RIGHT_AVAILABLE) {
					a[curr_row][++curr_col] = letter;
					break;
				} else {
					tried[RIGHT] = true;
					num_tried++;
				}
			} else if (dir == DOWN && !tried[DOWN]) {
				if (DOWN_AVAILABLE) {
					a[++curr_row][curr_col] = letter;
					break;
				} else {
					tried[DOWN] = true;
					num_tried++;
				}
			} else if (dir == LEFT && !tried[LEFT]) {
				if (LEFT_AVAILABLE) {
					a[curr_row][--curr_col] = letter;
					break;
				} else {
					tried[LEFT] = true;
					num_tried++;
				}
			}
		}

		/* reset the tried array */
		for (int i = 0; i < NUM_DIRECTIONS; i++) {
			tried[i] = false;
		}
		num_tried = 0;
	}

	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
