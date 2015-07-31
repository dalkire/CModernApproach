/*
 * Ch11 Ex06 | C Programming, A Modern Approach
 *
 * Write the following function:
 *
 * void find_two_largest(int a[], int n, int *largest, int *second_largest);
 *
 * When passed an array a of length n, the function will search a for its
 * largest and second-largest elements, storing them in the variables
 * pointed to by largest and second_largest respectively.
 */
#include <stdio.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
	int n, largest, second_largest;
	
	printf("This program finds the first and second largest integers entered\n");
	printf("How many will be entered? ");
	scanf("%d", &n);

	int a[n];

	printf("Enter %d integers separated by spaces: ", n);
	for (int i = 0; i < n; i++)
		scanf(" %d", &a[i]);

	find_two_largest(a, n, &largest, &second_largest);

	if (n == 0)
		printf("No numbers were entered.\n");
	else if (n == 1)
		printf("Only one number was entered. Largest: %d\n", largest);
	else
		printf("Largest: %d, Second Largest: %d\n",
		       largest, second_largest);

	return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
	if (n > 0) {
		*largest = *second_largest = a[0];
		for (int i = 0; i < n; i++) {
			if (a[i] > *largest) {
				*second_largest = *largest;
				*largest = a[i];
			}
		}
	}
}
