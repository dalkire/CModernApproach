/*
 * Ch09 Ex09 | C Programming, A Modern Approach
 *
 * What will be the output of the following program?
 * #include <stdio.h>
 * 
 * void swap(int a, int b);
 * 
 * int main(void)
 * {
 *     int i = 1, j = 2;
 * 
 *     swap(i, j);
 *     printf("i = %d, j = %d\n", i, j);
 * 
 *     return 0;
 * }
 * 
 * void swap(int a, int b)
 * {
 *     int temp = a;
 *     a = b;
 *     b = temp;
 * }
 */
#include <stdio.h>

void swap(int a, int b);

int main(void)
{
	int i = 1, j = 2;

	swap(i, j);
	printf("i = %d, j = %d\n", i, j);

	return 0;
}

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

/*
 * The result will be:
 * i = 1, j = 2
 *
 * This is because C passes variables by value and new copies are made in the
 * function which is called. In order to modify the original variables,
 * pointers must be sent to allow for writing new values into their memory
 * locations.
 */ 
