/*
 * Ch08 Ex02 | C Programming, A Modern Approach
 *
 * The Q&A section shows how to use a letter as an array subscript. Describe
 * how to use a digit (in character form) as a subscript.
 */
#include <stdio.h>

int main(void)
{
	int digits[10] = {0,1,2,3,4,5,6,7,8,9};

	printf("Using '7'-'0' as a subscript: ");
	printf("%d\n", digits['7'-'0']);
	
	return 0;
}

/*
 * The characters '0' to '9' are have values from 48 to 57.
 * To use a digit as a subscript, you can subtract '0' from it to get its
 * proper integer value in a similar way to how the answer from the Q&A
 * subtracted 'a' for characters.
 */ 
