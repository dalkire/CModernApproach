/*
 * Ch05 Ex06 | C Programming, A Modern Approach
 *
 * Is the following if statement legal?
 * if (n == 1-10)
 *     printf("n is between 1 and 10\n");
 *
 * If so, what does it do when n is equal to 5?
 */
 #include <stdio.h>

int main(void)
{
	int n = 5;

	if (n == 1-10)
		printf("n is between 1 and 10\n");

	return 0;
}

/*
 * It is legal.
 * n == 1-10 => n == -9
 * If n = 5 => n == -9 => 0
 */
