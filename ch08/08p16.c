/*
 * Ch08 Pr16 | C Programming, A Modern Approach
 *
 * Write a program that tests whether two words are anagrams (permutations of
 * the same letters):
 * Enter first word: smartest
 * Enter second word: mattress
 * The words are anagrams.
 *
 * Enter the first word: dumbest
 * Enter the second word: stumble
 * The words are not anagrams.
 *
 * Write a loop that reads the first word, character by character, using an
 * array of 26 integers to keep track of how many times each letter has been
 * seen. (For example, after the word smartest has been read, the array should
 * contain the values 1 0 0 0 1 0 0 0 0 0 0 0 1 0 0 0 0 1 2 2 0 0 0 0 0 0,
 * reflecting the fact that smartest contains one a, one e, one m, one r,
 * two s's, and two t's.) Use another loop to read the second word, except
 * this time decrementing the corresponding array elements as each letter is
 * read. Both loops should ignore any characters that aren't letters, and both
 * should treat upper-case letters in the same way as lower-case letters.
 * After the second word has been read, use a third loop to check whether all
 * elements in the array are zero. If so, the words are anagrams. Hint: You
 * may wish to use functions from <ctype.h>, such as isalpha and tolower.
 */
#include <ctype.h>
#include <stdio.h>

#define N_LETTERS 26

int main(void)
{
	int letters[N_LETTERS] = {0};
	char c;

	printf("Enter first word: ");
	while ((c = getchar()) != '\n') {
		if (isalpha(c)) {
			c = tolower(c);
			letters[c - 'a']++;
		}
	}

	printf("Enter second word: ");
	while ((c = getchar()) != '\n') {
		if (isalpha(c)) {
			c = tolower(c);
			letters[c - 'a']--;
		}
	}

	for (int i = 0; i < N_LETTERS; i++) {
		if (letters[i] != 0) {
			printf("The words are not anagrams.\n");
			return 0;
		}
	}

	printf("The words are anagrams.\n");

	return 0;
}
