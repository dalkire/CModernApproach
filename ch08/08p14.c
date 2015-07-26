/*
 * Ch08 Pr14 | C Programming, A Modern Approach
 *
 * Write a program that reverses the words in a sentence:
 * Enter a sentence: you can cage a swallow can't you?
 * Reversal of sentence: you can't swallow a cage can you?
 *
 * Hint: Use a loop to read the characters one by one and store them in a
 * one-dimensional char array. Have the loop stop at a period, question mark
 * or exclamation point ("the terminating character"), which is saved in a
 * separate char variable. Then use a second loop to search backward through
 * the array for the beginning of the last word. Print the last word, then
 * search backward for the next to last word. Repeat until the beginning of
 * the array is reached. Finally, print the terminating character.
 */
#include <stdio.h>

#define TERMINUS (c = getchar()) != '\n' && c != '.' && c != '?' && c != '!'

int main(void)
{
	char sentence[200], c;
	int pos;

	printf("Enter a sentence: ");
	for (int i = 0; TERMINUS; i++) {
		sentence[i] = c;
		pos = i;
	}

	printf("Reversal of sentence: ");
	for (int i = pos; i >= 0; i--) {
		int j;
		if (sentence[i] == ' ') {
			for (j = i + 1; sentence[j] != ' ' && j <= pos; j++) {
				printf("%c", sentence[j]);
			}
			printf(" ");
		} else if (i == 0) {
			for (j = i; sentence[j] != ' ' && j <= pos; j++) {
				printf("%c", sentence[j]);
			}
		}
	}

	printf("%c\n", c);

	return 0;
}
