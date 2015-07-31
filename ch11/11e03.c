/*
 * Ch11 Ex03 | C Programming, A Modern Approach
 *
 * The following function supposedly computes the sum and average of the numbers
 * in the array a, which has length n. avg and sum point to variables that
 * the function should modify. Unfortunately, the function contains several
 * errors; find and correct them.
 *
 * void avg_sum(double a[], int n, double *avg, double *sum)
 * {
 *     int i;
 *
 *     sum = 0.0;
 *     for (i = 0; i < n; i++)
 *         sum += a[i];
 *     avg = sum / n;
 * }
 */
#include <stdio.h>

#define N 10

void avg_sum(double a[], int n, double *avg, double *sum);

int main(void)
{
	double avg = 0.0, sum = 0.0;
	double a[N] = {0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

	printf("a[10] = {");
	for (int i = 0; i < N; i++) {
		if (i == N - 1)
			printf("%.1f}\n", a[i]);
		else
			printf("%.1f, ", a[i]);
	}

	avg_sum(a, N, &avg, &sum);
	printf("avg = %.2f, sum = %.2f\n", avg, sum);

	return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
	*sum = 0.0;
	for (int i = 0; i < n; i++)
		*sum += a[i];
	*avg = *sum / n;
}
