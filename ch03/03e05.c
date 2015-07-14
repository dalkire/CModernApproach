/*
 * Ch03 Ex05 | C Programming, A Modern Approach
 *
 * Suppose that we call scanf as follows:
 * scanf("%f%d%f", &x, &i, &y);
 * If the user enters
 * 12.3 45.6 789
 * what will be the values of x, i, and y after the call?
 * (Assume that x and y are float variables and i is an int variable.)
 */
#include <stdio.h>

int main(void)
{
	int i;
	float x, y;

	printf("Enter 12.3 45.6 789: ");
	scanf("%f%d%f", &x, &i, &y);
	printf("x: %f, i: %d, y: %f\n", x, i, y);

	return 0;
}

/*
 * scanf sees 12.3, a space ends the scan of float, x = 12.3
 * scanf sees  45, the . ends the decimal scan, i = 45
 * scanf sees .6, a space ends the scan of float, y = 0.6
 */ 
