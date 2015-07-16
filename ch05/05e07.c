/*
 * Ch05 Ex07 | C Programming, A Modern Approach
 *
 * What does the following statement print if i has the value 17?
 * What does it print if i has the value -17?
 * printf("%d\n", i >= 0 ? i : -i);
 */
#include <stdio.h>

int main(void)
{
	int i;

	i = 17;
	printf("%d\n", i >= 0 ? i : -i);

	i = -17;
	printf("%d\n", i >= 0 ? i : -i);

	return 0;
}

/*
 * (a) i = 17;
 *     i >= 0 ? i : -i
 *     17 >= 0 ? 17 : -17
 *     1 ? 17 : -17
 *     17
 * (b) i = -17
 *     i >= 0 ? i : -i
 *     -17 >= 0 ? -17 : -(-17)
 *     0 ? -17 : -(-17)
 *     17
 */
