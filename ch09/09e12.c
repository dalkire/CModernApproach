/*
 * Ch09 Ex12 | C Programming, A Modern Approach
 *
 * Write the following function:
 * double inner_product(double a[], double b[], int n);
 *
 * The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1].
 */
#include <stdio.h>

#define LEN 15

double inner_product(double a[], double b[], int n);

int main(void)
{
	double a[LEN] = {1.3, 2.0, 4.1, 5.22, 7.3, 8.0, 10.0, 11.0, 13.0, 14.0,
			 16.888, 17.79, 19.3, 20.4, 22.567};
	double b[LEN] = {5.2, 5.3, 5.2, 6.3, 6.2, 6.2, 7.7, 7.54, 7.6, 8.9, 8.0,
			 9.333, 9.292, 9.7, 10.4};

	printf("a: {");
	for (int i = 0; i < LEN; i++) {
		if (i == LEN - 1) {
			printf("%g}\n", a[i]);
		} else {
			printf("%g, ", a[i]);
		}
	}

	printf("b: {");
	for (int i = 0; i < LEN; i++) {
		if (i == LEN - 1) {
			printf("%g}\n", b[i]);
		} else {
			printf("%g, ", b[i]);
		}
	}

	printf("Inner product = %.3f\n", inner_product(a, b, LEN));
	
	return 0;
}

double inner_product(double a[], double b[], int n)
{
	double product = 0.0;

	for (int i = 0; i < n; i++) {
		product += a[i] * b[i];
	}

	return product;
}
