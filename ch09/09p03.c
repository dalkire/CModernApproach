/*
 * Ch09 Pr03 | C Programming, A Modern Approach
 *
 * Modify Programming Project 9 from Chapter 8 so that it includes the
 * following functions:
 * void generate_random_walk(char walk[10][10]);
 * void print_array(char walk[10][10]);
 *
 * main first calls generate_random_walk, which initializes the array to
 * contain 'i' characters and then replaces some of these characters by the
 * letters A through Z, as described in the original project. main then calls
 * print_array to display the array on the screen.
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

#define UP_AVAILABLE curr_row - 1 >= 0		\
	&& walk[curr_row - 1][curr_col] == '.'
#define RIGHT_AVAILABLE curr_col + 1 < COLS	\
	&& walk[curr_row][curr_col + 1] == '.'
#define DOWN_AVAILABLE curr_row + 1 < ROWS	\
	&& walk[curr_row + 1][curr_col] == '.'
#define LEFT_AVAILABLE curr_col - 1 >= 0	\
	&& walk[curr_row][curr_col - 1] == '.'

void generate_random_walk(char walk[ROWS][COLS]);
void print_array(char walk[ROWS][COLS]);

int main(void)
{
	char walk[ROWS][COLS];

	generate_random_walk(walk);
	print_array(walk);

	return 0;
}

void generate_random_walk(char walk[ROWS][COLS])
{
	int curr_row = -1, curr_col = 0, num_tried = 0;
	bool tried[4] = {false};

	srand((unsigned) time(NULL));

	/* Initialize array. */
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			walk[i][j] = '.';
		}
	}

	for (char letter = 'A'; letter <= 'Z'; letter++) {
		while (num_tried < NUM_DIRECTIONS) {
			int dir = rand() % NUM_DIRECTIONS;

			if (dir == UP && !tried[UP]) {
				if (UP_AVAILABLE) {
					walk[--curr_row][curr_col] = letter;
					break;
				} else {
					tried[UP] = true;
					num_tried++;
				}
			} else if (dir == RIGHT && !tried[RIGHT]) {
				if (RIGHT_AVAILABLE) {
					walk[curr_row][++curr_col] = letter;
					break;
				} else {
					tried[RIGHT] = true;
					num_tried++;
				}
			} else if (dir == DOWN && !tried[DOWN]) {
				if (DOWN_AVAILABLE) {
					walk[++curr_row][curr_col] = letter;
					break;
				} else {
					tried[DOWN] = true;
					num_tried++;
				}
			} else if (dir == LEFT && !tried[LEFT]) {
				if (LEFT_AVAILABLE) {
					walk[curr_row][--curr_col] = letter;
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
}

void print_array(char walk[10][10])
{
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < COLS; j++) {
			printf("%c ", walk[i][j]);
		}
		printf("\n");
	}
}
