/*
 * Ch08 Ex05 | C Programming, A Modern Approach
 *
 * The Fibnacci numbers are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each number
 * is the sum of the two preceding numbers. Write a program fragment that
 * declares an array named fib_numbers of length 40 and fills the array
 * with the first 40 Fibonacci numbers. Hint: Fill in the first two numbers
 * individually, then use a loop to compute the remaining numbers.
 */
#include <stdio.h>

#define N 40

int main(void)
{
	int fib_numbers[N] = {0,1};

	for (int i = 2; i < N; i++) {
		fib_numbers[i] = fib_numbers[i - 1] + fib_numbers[i - 2];
	}

	printf("The first %d Fibonacci numbers are:\n", N);

	for (int i = 0; i < N; i++) {
		printf("%d ", fib_numbers[i]);
	}
	printf("\n");
	
	return 0;
}
