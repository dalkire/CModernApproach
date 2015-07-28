/*
 * Ch09 Pr01 | C Programming, A Modern Approach
 *
 * Write a program that asks the user to enter a series of integers (which it
 * stores in an array), then sorts the integers by calling the function
 * selection_sort. When given an array with n elements, selection_sort must
 * do the following:
 * 1. Search the array to find the largest element, then move it to the last
 *    position in the array.
 * 2. Call itself recursively to sort the first n - 1 elements of the array.
 */
#include <stdio.h>

#define N 10

void selection_sort(int a[], int n);

int main(void)
{
	int a[N] = {5, 2, 6, 3, 6, 3, 5, 1, 5, 4};

	printf("Unsorted a[]: ");
	for (int i = 0; i < N; i++) {
		printf(" %d", a[i]);
	}
	printf("\n");

	selection_sort(a, N);

	printf("  Sorted a[]: ");
	for (int i = 0; i < N; i++) {
		printf(" %d", a[i]);
	}
	printf("\n");

	return 0;
}

void selection_sort(int a[], int n)
{
	if (n < 1) return;

	int max = a[0], max_pos = 0;

	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
			max_pos = i;
		}
	}

	/* swap max with last element */
	a[max_pos] = a[n - 1];
	a[n - 1] = max;

	selection_sort(a, n - 1);
}
