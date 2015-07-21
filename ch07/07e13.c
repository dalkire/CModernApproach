/*
 * Ch07 Ex13 | C Programming, A Modern Approach
 *
 * Assume that a program contains the following declarations:
 * char c = '\l';
 * short s = 2;
 * int i = -3;
 * long m = 5;
 * float f = 6.5f;
 * double d = 7.5;
 *
 * Give the value and the type of each expression listed below.
 * (a) c * i
 * (b) s + m
 * (c) f / c
 * (d) d / s
 * (e) f - d
 * (f) (int) f
 */
#include <stdio.h>

int main(void)
{
	char c = '\l';
	short s = 2;
	int i = -3;
	long m = 5;
	float f = 6.5f;
	double d = 7.5;

	printf("%d\n", c * i);
	printf("%ld\n", s + m);
	printf("%f\n", f / c);
	printf("%f\n", d / s);
	printf("%f\n", f - d);
	printf("%d\n", (int) f);

	return 0;
}

/*
 * (a) c * i = 108 * -3 = -324
 *     char * int => int
 * (b) s + m = 2 + 5 = 7
 *     short + long => long
 * (c) f / c = 6.5f / 108 = 0.06f
 *     float / char => float
 * (d) d / s = 7.5 / 2 = 3.75
 *     double / short => double
 * (e) f - d = 6.5f - 7.5 = -1.0
 *     float - double => double
 * (f) (int) f = (int) 6.5 = 6
 *     (int) float => int
 */
