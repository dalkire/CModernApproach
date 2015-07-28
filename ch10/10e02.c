/*
 * Ch10 Ex02 | C Programming, A Modern Approach
 *
 * The following program outline shows only function definitions and variable
 * declarations.
 * int b, c;
 *
 * void f(void)
 * {
 *     int b, d;
 * }
 *
 * void g(int a)
 * {
 *     int c;
 *     {
 *         int a, d;
 *     }
 * }
 *
 * int main(void)
 * {
 *     int c, d;
 * }
 *
 * For each of the following scopes, list all variable and parameter names
 * visible in that scope:
 * (a) The f function
 * (b) The g function
 * (c) The block in which a and d are declared
 * (d) The main function
 */
#include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * (a) Variables available within the f function:
 *     extern b (before local decl), c, local b (after decl), d (after decl), f
 * (b) Variables available within the g function:
 *     extern b, extern c (before local decl), param a (before inner block
 *     decl), local c (after decl), inner block a (after decl until end of
 *     block), d (after decl until end of block), f, g
 * (c) Variables available within the block in which a and d are declared:
 *     extern b, param a (until local decl), local c, local a (after decl),
 *     local d (after decl), f, g
 * (d) Variables available within the main function:
 *     extern b, extern c (until local decl), local c (after decl), local d
 *     (after decl)
 */
