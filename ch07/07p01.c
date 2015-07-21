/*
 * Ch07 Pr01 | C Programming, A Modern Approach
 *
 * The square2.c program of Section 6.3 will fail (usually by printing strange
 * answers) if i * i exceeds the maximum int value. Run the program and
 * determine the smallest value of n that causes failure. Try changing the
 * type of i to short and running the program again. (Don't forget to update
 * the conversion specifications in the call to printf!) Then try long. From
 * these experiments, what can you conclude about the number of bits used to
 * store integer types on your machine?
 */
#include <stdio.h>

int main(void)
{

	int n;
	long i;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 3037000400; i <= 3037000600; i++) {
		printf("%220ld%22ld\n", i, i * i);
	}

	return 0;
}

/*
 * The first integer to cause overflow is 46341, which resuts in -2147479015.
 * The first short to cause overflow is 182, which results in -32412.
 * The first long to cause overflow is 3037000500, which results in
 * -9223372036709301616
 *
 * On some machines, the number of bits to store int values is the same as
 * the number of bits to store short values. On my machine, this is not the
 * case.
 * On my machine, short can hold 181 * 181 = 32761, which in binary
 * is 0111 1111 1111 1001, requiring 16 bits for shorts.
 * On my machine, int can hold 46340 * 46340 = 2.147e+09, which in
 * binary is 0111 1111 1111 1110 1010 1000 0001 0000, requiring 32 bits.
 * On my machine, long can hold 3037000499 * 3037000499 = 9.223e+18, which
 * is 0111 1111 1111 1111 1111 1111 1111 1110 1001 1110 1010 0001 1101 1100
 * 0010 1001, requiring 64 bits
 */
