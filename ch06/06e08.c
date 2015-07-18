/*
 * Ch06 Ex08 | C Programming, A Modern Approach
 *
 * What output does the following for statement produce?
 * for (i = 10; i >= 1; i /= 2)
 *     printf("%d ", i++);
 */
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 10; i >= 1; i /= 2) {
		printf("%d ", i++);
	}

	return 0;
}

/*
 * i = 10; Is i >= 1? Yes.
 * Print: 10 
 * i++ => i =  11; i /= 2 => i = 11 / 2 => i = 5;
 * i = 5; Is i >= 1? Yes.
 * Print: 5 
 * i++ => i = 6; i /= 2 => i = 6 / 2 => i = 3;
 * i = 3; Is i >= 1? Yes.
 * Print: 3 
 * i++ => i = 4; i /= 2 => i = 4 / 2 => i = 2;
 * i = 2; Is i >= 1? Yes.
 * Print: 2 
 * i++ => i = 3; i /= 2 => i = 3 / 2 => i = 1;
 * i = 1; Is i >= 1? Yes.
 * Print: 1 
 * i++ => i = 2; i /= 2 => i = 2 / 2 => i = 1;
 * i = 1; Is i >= 1? Yes.
 * Print: 1 
 * i++ => i = 2; i /= 2 => i = 2 / 2 => i = 1;
 * i = 1; Is i >= 1? Yes.
 * Print: 1 
 *
 * 10 5 3 2 1 1 1 1 1 1 1, etc.
 */
