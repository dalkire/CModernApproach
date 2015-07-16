/*
 * Ch05 Ex08 | C Programming, A Modern Approach
 *
 * The following if statement is unnecessarily complicated. Simplify
 * it as much as possible. (Hint: The entire statement can be replaced
 * by a single assignment.)
 * if (age >= 13)
 *     if (age <= 19)
 *         teenager = true;
 *     else
 *         teenager = false;
 * else if (age < 13)
 *     teenager = false;
 */
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int age;
	bool teenager = false;

	printf("Age: ");
	scanf("%d", &age);

	if (age >= 13 && age <= 19) {
		teenager = true;
	}

	printf("Teenager: %s\n", teenager ? "true" : "false");

	return 0;
}
