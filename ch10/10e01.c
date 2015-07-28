/*
 * Ch10 Ex01 | C Programming, A Modern Approach
 *
 * The following program outline shows only function definitions and variable
 * declarations.
 * int a;
 *
 * void f(int b)
 * {
 *     int c;
 * }
 *
 * void g(void)
 * {
 *     int d;
 *     {
 *         int e;
 *     }
 * }
 *
 * int main(void)
 * {
 *     int f;
 * }
 *
 * For each of the following scopes, list all variable and parameter names
 * visible in that scope:
 * (a) The f function
 * (b) The g function
 * (c) The block in which e is declared
 * (d) The main function
 */
#include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * (a) Variables available within the f function:
 *     a, b, c (after decl), f
 * (b) Variables available within the g function:
 *     a, d (after decl), e (after decl within inner block), f, g
 * (c) Variables available within the block in which e is declared:
 *     a, d, e (after decl), f, g
 * (d) Variables available within the main function:
 *     a, f (function, before var decl), f (var, after decl), g
 */
