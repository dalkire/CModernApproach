/*
 * Ch03 Pr01 | C Programming, A Modern Approach
 *
 * Write a program that accepts a date from the user in the form
 * mm/dd/yyy and then displays it in the form yyyymmdd:
 * Enter a date (mm/dd/yyy): 2/17/2011
 * You entered the date 20110217
 */
#include <stdio.h>

int main(void)
{
	int m, d, y;

	printf("Enter a date (mm/dd/yyy): ");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("%d%.2d%.2d\n", y, m, d);

	return 0;
}
