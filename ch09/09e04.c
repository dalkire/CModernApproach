/*
 * Ch09 Ex04 | C Programming, A Modern Approach
 *
 * Write a function day_of_year(month, day, year) that returns the day of the
 * year (an integer between 1 and 366) specified by the three arguments.
 */
#include <stdio.h>

int day_of_year(int m, int d, int y);

int main(void)
{
	int m, d, y;

	printf("Enter date (mm/dd/yyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("Day of Year: %d\n", day_of_year(m, d, y));

	return 0;
}

/*
 * See: http://stackoverflow.com/questions/3220163/how-to-find-leap-year-programatically-in-c
 * for most efficient leap year test.
 */ 
int day_of_year(int m, int d, int y)
{
	int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int day = 0;

	for (int i = 0; i < m - 1; i++) {
		day += months[i];
	}
	day += d;

	/* If leap year and date given is past 2/29 */
	if ((y & 3) == 0 && ((y % 25) != 0 || (y & 15) == 0)) {
		if (m > 2) {
			day++;
		}
	}

	return day;
}
