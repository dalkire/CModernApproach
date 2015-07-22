/*
 * Ch07 Pr10 | C Programming, A Modern Approach
 *
 * Write a program that counts the number of vowels (a, e, i, o, and u) in a
 * sentence:
 * Enter a sentence: And that's the way it is.
 * Your sentence contains 6 vowels.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int num_vowels = 0;
	char c;

	printf("Enter a sentence: ");

	while ((c = getchar()) != '\n') {
		c = tolower(c);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
			num_vowels++;
		}
	}

	printf("Your sentence contains %d vowels\n", num_vowels);

	return 0;
}
