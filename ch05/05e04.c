/*
 * Ch05 Pr04 | C Programming, A Modern Approach
 *
 * Write a single expression whose value is either -1, 0, or +1,
 * depending on whether i is less than, equal to, or greater than j,
 * respectively.
 */
 #include <stdio.h>

int main(void)
{
	int i, j;

	printf("For i < j, i == j, i > j, output will be -1, 0, or +1\n");
	printf("Enter i and j separated by a space: ");
	scanf("%d%d", &i, &j);

	printf("%d\n", (i > j) - (i < j));

	return 0;
}

/*
 * For (i > j) - (i < j),
 * if i < j:
 * 0 - 1 = -1
 * if i == j:
 * 0 - 0 = 0
 * if i > j:
 * 1 - 0 = +1
 */
