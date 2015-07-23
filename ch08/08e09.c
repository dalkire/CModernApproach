/*
 * Ch08 Ex09 | C Programming, A Modern Approach
 *
 * Using the array of Exercise 8, write a program fragment that computes
 * the average temperature for a month (averaged over all days of the month
 * and all hours of the day).
 */
#include <stdio.h>

#define DAYS 30
#define HOURS 24

int main(void)
{
	int temperature_readings[DAYS][HOURS];
	int temp_sum = 0, num_readings = 0;

	for (int i = 0; i < DAYS; i++) {
		for (int j = 0; j < HOURS; j++) {
			if (j % 5 == 0) {
				temperature_readings[i][j] = 82;
			} else if (j % 3 == 0) {
				temperature_readings[i][j] = 79;
			} else if (j % 2 == 0) {
				temperature_readings[i][j] = 77;
			} else {
				temperature_readings[i][j] = 90;
			}
		}
	}

	for (int i = 0; i < DAYS; i++) {
		for (int j = 0; j < HOURS; j++) {
			temp_sum += temperature_readings[i][j];
			num_readings++;
		}
	}

	printf("Monthly avg temp: %.2f\n", (float) temp_sum / num_readings);

	return 0;
}
