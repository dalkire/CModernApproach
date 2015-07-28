/*
 * Ch09 Pr04 | C Programming, A Modern Approach
 *
 * Modify Programming Project 16 from Chapter 8 so that it includes the
 * following functions:
 * void read_word(int counts[26]);
 * bool equal_array(int counts1[26], int counts2[26]);
 *
 * main will call read_word twice, once for each of the two words entered by
 * the user. As it reads a word, read_word will use the letters in the word
 * to update the counts array, as described in the original project. (main
 * will declare two arrays, one for each word. These arrays are used to track
 * how many times each letter occurs in the words.) main will then call
 * equal_array, passing it the two arrays. equal_array will return true if
 * the elements in the two arrays are identical (indicating that the words
 * are anagrams) and false otherwise.
 */
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define N_LETTERS 26

void read_word(int counts[N_LETTERS]);
bool equal_array(int counts1[N_LETTERS], int counts2[N_LETTERS]);

int main(void)
{
	int counts1[N_LETTERS] = {0}, counts2[N_LETTERS] = {0};

	read_word(counts1);
	read_word(counts2);

	if (equal_array(counts1, counts2)) {
		printf("The words are anagrams.\n");
	} else {
		printf("The words are not anagrams.\n");
	}

	return 0;
}

void read_word(int counts[N_LETTERS])
{
	char c;

	printf("Enter word: ");
	while ((c = getchar()) != '\n') {
		if (isalpha(c)) {
			c = tolower(c);
			counts[c - 'a']++;
		}
	}

}

bool equal_array(int counts1[N_LETTERS], int counts2[N_LETTERS])
{
	bool equal = true;

	for (int i = 0; i < N_LETTERS; i++) {
		if (counts1[i] != counts2[i]) {
			equal = false;
			break;
		}
	}

	return equal;
}
