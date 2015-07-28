/*
 * Ch09 Ex14 | C Programming, A Modern Approach
 *
 * The following function is supposed to return true if any eleent of the
 * array has the value 0 and false if all elements are nonzero. Sadly, it
 * contains an error. Find the error and show how to fix it:
 * bool has_zero(int a[], int n)
 * {
 *     int i;
 *
 *     for (i = 0; i < n; i++)
 *         if (a[i] == 0)
 *             return true;
 *         else
 *             return false;
 * }
 */
#include <stdbool.h>
#include <stdio.h>

#define LEN 3

bool has_zero(int a[], int n);

int main(void)
{
	int a[LEN] = {-1, 0, 1};
	int b[LEN] = {1, 2, 3};

	printf("a[] =");
	for (int i = 0; i < LEN; i++) {
		printf(" %d", a[i]);
	}
	printf("\n");

	printf("b[] =");
	for (int i = 0; i < LEN; i++) {
		printf(" %d", b[i]);
	}
	printf("\n");

	printf("has_zero(a, 3) => %s\n",
	       (has_zero(a, 3) == 1) ? "true" : "false");
	printf("has_zero(b, 3) => %s\n",
	       (has_zero(b, 3) == 1) ? "true" : "false");

	return 0;
}

bool has_zero(int a[], int n)
{
	bool zero_found = false;

	for (int i = 0; i < n; i++) {
		if (a[i] == 0) {
			zero_found = true;
			break;
		}
	}

	return zero_found;
}

/*
 * The has_zero function needs to evaluate every element of the array to see
 * if there are any zeroes. As written, as soon as it seen a nonzero number
 * it will return true, indicating that there are no zeroes anywhere in the
 * array when that is not what it actually evaluated. To fix it, we will
 * create a bool variable and set its value in the loop, only returning that
 * value once the loop has finished processing all values if it has not found
 * a zero yet. It is still ok to exit the loop early if we do encounter a zero.
 */ 
