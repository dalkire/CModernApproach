/*
 * Ch07 Pr05 | C Programming, A Modern Approach
 *
 * In the SCRABBLE Crossword Game, players form words using small tiles, each
 * containing a letter and a face value. The face value varies from one letter
 * to another, based on the letter's rarity. (Here are the face values:
 * 1: AEILNORSTU, 2: DG, 3: BCMP, 4: FHVWY, 5: K, 6: JX, 10: QZ.) Write a
 * program that computes the value of a word by summing the values of its
 * letters:
 * Enter a word: pitfall
 * Scrabble value: 12
 *
 * Your program should allow any mixture of lower-case and upper-case letters
 * in the word. Hint: Use the toupper library function.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char c;
	int sum = 0;

	printf("Enter a word: ");

	while ((c = getchar()) != '\n') {
		c = toupper(c);

		if (c == 'Q' || c == 'Z') {
			sum += 10;
		} else if (c == 'J' || c == 'X') {
			sum += 8;
		} else if (c == 'K') {
			sum += 5;
		} else if (c == 'F' || c == 'H' || c == 'V' || c == 'W'
			   || c == 'Y') {
			sum += 4;
		} else if (c == 'B' || c == 'C' || c == 'M' || c == 'P') {
			sum += 3;
		} else if (c == 'D' || c == 'G') {
			sum += 2;
		} else {
			sum +=1;
		}
	}

	printf("Scrabble value: %d\n", sum);

	return 0;
}
