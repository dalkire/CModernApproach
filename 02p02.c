/*
 * Ch02 Pr02 | C Programming, A Modern Approach
 *
 * Write a program that computes the volume of a sphere with a
 * 10-meter radius, using the formula v = 4/3πr^3. Write the
 * fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?)
 * Hint: C doesn't have an exponentiation operator, so you'll need
 * to multiply r by itself twice to compute r^3.
 */
 #include <stdio.h>

int main(void)
{
	float pi = 3.14159f;
	int r = 10;

	printf("Volume: %.2f\n", 4.0f/3.0f * pi * r*r*r);

	return 0;
}

/*
 * 4/3 as integer division rounds to 1 instead of 1.33, so the
 * volume is 3141.59 instead of the more accurate 4188.79.
 */
