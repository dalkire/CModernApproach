/*
 * Ch11 Ex02 | C Programming, A Modern Approach
 *
 * If i is an int variable and p and q are pointers to int, which of the
 * following assignments are legal?
 * (a) p = i;    (b) *p = &i;    (c) &p = q;    (d) p = &q;    (e) p = *&q;
 * (f) p = q;    (g) p = *q;     (h) *p = q;    (i) *p = *q
 */
#include <stdio.h>

int main(void)
{
	int i = 777;
	int *p = &i;
	int *q = &i;

	p = i;
	*p = &i;
	&p = q;
	p = &q;
	p = *&q;
	p = q;
	p = *q;
	*p = q;
	*p = *q;

	return 0;
}

/*
 * Let's note the type of each variable. 
 * (a) p = i    =>  int * = int    =>  Incompatible
 * (b) *p = &i  =>  int = int *    =>  Incompatible
 * (c) &p = q   =>  int ** = int * =>  Not Assignable
 * (d) p = &q   =>  int * = int ** =>  Incompatible
 * (e) p = *&q  =>  int * = int *  =>  Legal
 * (f) p = q    =>  int * = int *  =>  Legal
 * (g) p = *q   =>  int * = int    =>  Incompatible
 * (h) *p = q   =>  int = int *    =>  Incompatible
 * (i) *p = *q  =>  int = int      =>  Legal
 */
