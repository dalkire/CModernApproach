/*
 * Ch09 Ex08 | C Programming, A Modern Approach
 *
 * Which of the following would be valid prototypes for a function that returns
 * nothing and has one double parameter?
 * (a) void f(double x);
 * (b) void f(double);
 * (c) void f(x);
 * (d) f(double x);
 */
#include <stdio.h>

f(double x);

int main(void)
{
	return 0;
}

void f(double x)
{
}

/*
 * (a) Valid and standard.
 * (b) Valid, but doesn't offer potentially helpful variable name.
 * (c) Invalid. Function prototype requires types on all parameters.
 * (d) Invalid. Function prototype without specified return type defaults to
 *     int, which conflicts with the return type of void in the definition.
 */ 
