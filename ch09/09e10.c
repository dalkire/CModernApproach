/*
 * Ch09 Ex10 | C Programming, A Modern Approach
 *
 * Write functions that return the following values. (Assume that a and n are
 * parameters, where a is an array of int values and n is the length of the
 * array.)
 * (a) The largest element in a.
 * (b) The average of all elements in a.
 * (c) The number of positive elements in a.
 */
#include <stdio.h>

#define LEN 10

int max(int a[], int n);
float avg(int a[], int n);
int n_pos(int a[], int n);

int main(void)
{
	int a[LEN] = {-3, 7, 14, 8, -12, 9, 0, -1, -3, 4};

	printf("Array:");
	for (int i = 0; i < LEN; i++) {
		printf(" %d", a[i]);
	}
	printf("\n");

	printf("Max: %d\n", max(a, LEN));
	printf("Avg: %.2f\n", avg(a, LEN));
	printf("Num. Positive: %d\n", n_pos(a, LEN));
	
	return 0;
}

/*
 * Given an int array of length n, return the largest element.
 */
int max(int a[], int n)
{
	int maximum = a[0];

	for (int i = 0; i < n; i++) {
		if (a[i] > maximum) {
			maximum = a[i];
		}
	}

	return maximum;
}

/*
 * Given an int array of length n, return the average of all elements.
 */
float avg(int a[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += a[i];
	}

	return (float) sum / n;
}

/*
 * Given an int array of length n, return the number of positive elements.
 */
int n_pos(int a[], int n)
{
	int n_positive = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] >= 0) {
			n_positive++;
		}
	}

	return n_positive;
	
}
