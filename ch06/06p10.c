/*
 * Ch06 Pr10 | C Programming, A Modern Approach
 *
 * Programming Project 9 in Chapter 5 asked you to write a program that
 * determines which of two dates comes earlier on the calendar. Generalize
 * the program so that the user may enter any number of dates. The user
 * will enter 0/0/0 to indicate that no more dates will be entered:
 * Enter a date (mm/dd/yy): 3/6/08
 * Enter a date (mm/dd/yy): 5/17/07
 * Enter a date (mm/dd/yy): 6/3/07
 * Enter a date (mm/dd/yy): 0/0/0
 * 5/17/07 is the earliest date
 */
#include <stdio.h>

int main(void)
{
	int first_month, first_day, first_year, m, d, y;

	printf("Enter a date (mm/dd/yy): ");
	scanf("%d/%d/%d", &m, &d, &y);

	first_month = m;
	first_day = d;
	first_year = y;

	while (m != 0 || d != 0  || y != 0) {
		if (y < first_year) {
			first_month = m;
			first_day = d;
			first_year = y;
		} else if (y == first_year && m < first_month) {
			first_month = m;
			first_day = d;
			first_year = y;
		} else if (y == first_year && m == first_month && d < first_day) {
			first_month = m;
			first_day = d;
			first_year = y;
		}

		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &m, &d, &y);
	}

	printf("%d/%d/%.2d is the earliest date\n",
	       first_month, first_day, first_year);

	return 0;
}
