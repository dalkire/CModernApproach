/*
 * Ch07 Ex06 | C Programming, A Modern Approach
 *
 * For each of the following items of data, specify which of the types of
 * char, short, int, or long is the smallest one guaranteed to be large
 * enough to store the item.
 * (a) Days in a month
 * (b) Days in a year
 * (c) Minutes in a day
 * (d) Seconds in a day
 */
#include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * (a) Maximum 31. Signed char uses 7 bits for the magnitude allowing up to 127
 * (b) Maximum 366. Short int is 15 bits of magnitude allowing up to 32,767
 * (c) 24*60 = 1440. Short int is sufficient.
 * (d) 24*60*60 = 86400. On a 16-bit machine, int and short are the same,
 *     using 15 bits of magnitude for signed numbers up to 32,767.
 *     Long is necessary.
 */
