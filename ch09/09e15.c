/*
 * Ch09 Ex15 | C Programming, A Modern Approach
 *
 * The following (rather confusing) function finds the median of three numbers.
 * Rewrite the function so that it has just one return statement.
 * double median(double x, double y, double z)
 * {
 *     if (x <= y)
 *         if (y <= z) return y;
 *         else if (x <= z) return z;
 *         else return x;
 *     if (z <= y) return y;
 *     if (x <= z) return x;
 *     return z;
 * }
 */
#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
	double x = 1.1, y = 0.8, z = 2.3;

	printf("median of %.1f, %.1f, and %.1f is %.1f\n",
	       x, y, z, median(x, y, z));

	return 0;
}

double median(double x, double y, double z)
{
	double median = x;

	if (x <= y) {
		if (y <= z) {
			median = y;
		} else if (x <= z) {
			median = z;
		} else {
			median = x;
		}
	}

	if (z <= y) {
		median = y;
	}

	if (x <= z) {
		median = x;
	}

	return median;
}
