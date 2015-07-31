/*
 * Ch11 Ex07 | C Programming, A Modern Approach
 *
 * Write the following function:
 *
 * void split_date(int day_of_year, int year, int *month, int *day);
 *
 * day_of_year is an integer between 1 and 366, specifying a particular day
 * within the year designated by year. month and day point to variables in
 * which the function will store the equivalent month (1-12) and day within
 * that month (1-31).
 */
#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
	int year, day_of_year, month, day;

	printf("Enter a year, followed by the day of the year.\n");
	printf("Ex. 1978 207: ");
	scanf("%d%d", &year, &day_of_year);

	split_date(day_of_year, year, &month, &day);
	printf("The full date is %.2d/%.2d/%d\n", month, day, year);

	return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
	int months[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int sum = 0;

	/* If leap year */
	if ((year & 3) == 0 && ((year % 25) != 0 || (year & 15) == 0))
		months[2]++;

	for (int i = 1; i < 13; i++) {
		if (sum + months[i] >= day_of_year) {
			*month = i;
			break;
		} else {
			sum += months[i];
		}
	}
	*day = day_of_year - sum;
}
