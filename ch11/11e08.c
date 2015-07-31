/*
 * Ch11 Ex08 | C Programming, A Modern Approach
 *
 * Write the following function:
 *
 * int *find_largest(int a[], int n);
 *
 * When passed an array a of length n, the function will return a pointer
 * to the array's largest element.
 */
#include <stdio.h>
#include <stdlib.h>

int *find_largest(int a[], int n);

int main(void)
{
	int n;

	printf("Prints largest integer from given array.\n");
	printf("How many integers will be entered? ");
	scanf("%d", &n);

	int a[n];

	printf("Enter %d integers separated by spaces: ", n);
	for (int i = 0; i < n; i++)
		scanf(" %d", &a[i]);

	int *largest = find_largest(a, n);
	printf("largest item: %d\n", *largest);

	return 0;
}

int *find_largest(int a[], int n)
{
	int largest = a[0];
	int index_of_largest = 0;

	for (int i = 1; i < n; i++) {
		if (a[i] > largest) {
			largest = a[i];
			index_of_largest = i;
		}
	}

	return &a[index_of_largest];
}
