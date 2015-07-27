/*
 * Ch09 Ex01 | C Programming, A Modern Approach
 *
 * The following function, which computes the area of a triangle, contains two
 * errors. Locate the errors and show how to fix them. (Hint: There are no
 * errors in the formula.)
 * double triangle_area(double base, height)
 * double product;
 * {
 *     product = base * height;
 *     return product / 2;
 * }
 */
#include <stdio.h>

double triangle_area(double base, double height);

int main(void)
{
	printf("Area of triangle with base 3 and height 4: %.1f\n",
	       triangle_area(3.0, 4.0));

	return 0;
}

double triangle_area(double base, double height)
{
	double product = base * height;

	return product / 2;
}

/*
 * (1) The type declaration for the first parameter doesn't carry over to the
 * second like it does in variable definitions. The type is required for all
 * parameters.
 * (2) The double product; definition should be inside the braces of the
 * function. It looks like the obsolete way to add parameter types after the
 * parameter list, but product isn't a parameter, it is clearly meant to be a
 * new variable in the body of the function.
 */ 
