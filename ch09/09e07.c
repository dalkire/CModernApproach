/*
 * Ch09 Ex07 | C Programming, A Modern Approach
 *
 * Suppose that the function f has the following definition:
 * int f(int a, int b) {...}
 *
 * Which of the following statements are legal? (Assume that i has type int and
 * x has type double.)
 * (a) i = f(83, 12);
 * (b) x = f(83, 12);
 * (c) i = f(3.15, 9.28);
 * (d) x = f(3.15, 9.28);
 * (e) f(83, 12);
 */
#include <stdio.h>

int f(int a, int b);

int main(void)
{
	int i;
	double x;

	i = f(83, 12);
	x = f(83, 12);
	i = f(3.15, 9.28);
	x = f(3.15, 9.28);
	f(83, 12);

	return 0;
}

int f(int a, int b)
{
	return a;
}

/*
 * (a) Legal. f returns an int and assigns to an int.
 * (b) Legal. f returns an int and implicitly converts during assignment to a
 *     double.
 * (c) Legal, with warnings. f is called with arguments of the wrong type. They
 *     will be implicitly converted to ints.
 * (d) Legal, with warnings. f is called with arguments of the wrong type. They
 *     will be implicitly converted to ints.
 * (e) Legal. f is called with arguments of the correct type, nothing is done
 *     with the return value, which is perfectly acceptable.
 */ 
