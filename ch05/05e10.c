/*
 * Ch05 Ex10 | C Programming, A Modern Approach
 *
 * What output does the following program fragment produce? (Assume that
 * i is an integer variable.)
 * i = 1;
 * switch (i % 3) {
 *     case 0: printf("zero");
 *     case 1: printf("one");
 *     case 2: printf("two");
 * }
 */
#include <stdio.h>

int main(void)
{
	int i;

	i = 1;
	switch (i % 3) {
	        case 0: printf("zero");
	        case 1: printf("one");
	        case 2: printf("two");
	}

	return 0;
}

/*
 * i = 1;
 * i % 3 => 1 % 3 => 1
 * Jump to case 1, print "one";
 * There is no break, fall through and print "two"
 * onetwo
 */ 
