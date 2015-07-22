/*
 * Ch07 Pr13 | C Programming, A Modern Approach
 *
 * Write a program that calculates the average word length for a sentence:
 * Enter a sentence: It was deja vu all over again.
 * Average word length: 3.4
 *
 * For simplicity, your program should consider a punctuation mark to be
 * part of the word to which it is attached. Display the average word
 * length to one decimal place.
 */
#include <stdio.h>

int main(void)
{
	char c;
	int num_words = 0, num_letters = 0;

	printf("Enter a sentence: ");

	while ((c = getchar()) != '\n') {
		if (c == ' ') {
			num_words++;
		} else {
			num_letters++;
		}
	}
	num_words++; /* counting the newline as a word terminator */

	printf("Average word length: %.1f\n", (float) num_letters / num_words);

	return 0;
}
