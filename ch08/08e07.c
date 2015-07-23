/*
 * Ch08 Ex07 | C Programming, A Modern Approach
 *
 * Using the shortcuts described in Section 8.2, shrink the initializer
 * for the segments array (Exercise 6) as much as you can.
 */
#include <stdio.h>

int main(void)
{
	/*
	 * 0 = 0 1 2 3 4 5
	 * 1 = 1 2
	 * 2 = 0 1 3 4 6
	 * 3 = 0 1 2 3 6
	 * 4 = 1 2 5 6
	 * 5 = 0 2 3 5 6
	 * 6 = 0 2 3 4 5 6
	 * 7 = 0 1 2
	 * 8 = 0 1 2 3 4 5 6
	 * 9 = 0 1 2 3 5 6
	 */
	 const int segments[10][7] = {{1, 1, 1, 1, 1, 1},     // 0
	                              {0, 1, 1}               // 1
	                              {1, 1, 0, 1, 1, 0, 1}   // 2
	                              {1, 1, 1, 1, 0, 0, 1}   // 3
	                              {0, 1, 1, 0, 0, 1, 1}   // 4
	                              {1, 0, 1, 1, 0, 1, 1}   // 5
	                              {1, 0, 1, 1, 1, 1, 1}   // 6
	                              {1, 1, 1}               // 7
	                              {1, 1, 1, 1, 1, 1, 1}   // 8
	                              {1, 1, 1, 1, 0, 1, 1}}; // 9

	return 0;
}
