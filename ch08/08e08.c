/*
 * Ch08 Ex08 | C Programming, A Modern Approach
 *
 * Write a declaration for a two-dimensional array named temperature_readings
 * that stores one month of hourly temperature readings. (For simplicity,
 * assume that a month has 30 days.) The rows of the array should represent
 * days of the month; the columns should represent hours of the day.
 */
#include <stdio.h>

#define DAYS 30
#define HOURS 24

int main(void)
{
	int temperature_readings[DAYS][HOURS];

	for (int i = 0; i < DAYS; i++) {
		printf("Day %d:\n", i + 1);
		for (int j = 0; j < HOURS; j++) {
			printf("%.2d:00  ", j);

			if ((j + 1) % 6 == 0) {
				printf("\n");
			}
		}
		printf("\n");
	}

	return 0;
}
