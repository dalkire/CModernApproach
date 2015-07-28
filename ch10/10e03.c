/*
 * Ch10 Ex03 | C Programming, A Modern Approach
 *
 * Suppose that a program has only one function (main). How many different
 * variables named i could this program contain?
 */
#include <stdio.h>

int main(void)
{
	for (int i = 0; i < 3; i++) {
		printf("1st instance: %d\n", i);
    
		for (int i = 3; i > 0; i--) {
			printf("2nd instance: %d\n", i);
    
			for (int i = 21; i < 24; i++) {
				printf("3rd instance: %d\n", i);
				// ad inf.
			}
		}
	}

	return 0;
}

/*
 * Such a program could theoretically contain an infinite amount of variables
 * named i. Consider the following:
 * for (int i = 0; i < 3; i++) {
 *     printf("1st instance: %d\n", i);
 *     
 *     for (int i = 3; i > 0; i--) {
 *         printf("2nd instance: %d\n", i);
 *     
 *         for (int i = 21; i < 24; i++) {
 *             printf("3rd instance: %d\n", i);
 *             // ad inf.
 *         }
 *     }
 * }
 */
