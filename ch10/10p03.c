/*
 * Ch10 Pr03 | C Programming, A Modern Approach
 *
 * Remove the num_in_rank, num_in_suit, and card_exists arrays from the poker.c
 * program of Section 10.5. Have the program store the cards in a 5x2 array
 * instead. Each row of the array will represent a card. For example, if the
 * array is named hand, then hand[0][0] will store the rank of the first card
 * and hand[0][1] will store the suit of the first card.
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

bool straight, flush, four, three;
int pairs; /* can be 0, 1, or 2 */

void read_cards(int hand[NUM_CARDS][2]);
void analyze_hand(int hand[NUM_CARDS][2]);
void print_result(void);

/*
 * Calls read_cards, analyze_hand, and print_result repeatedly.
 */
int main(void)
{
	int hand[NUM_CARDS][2];

	while(true) {
		read_cards(hand);
		analyze_hand(num_in_rank, num_in_suit);
		print_result();
	}
}

/*
 * Reads the cards into the hand array; checks for bad cards
 * and duplicate cards.
 */
void read_cards(int hand[NUM_CARDS][2])
{
	bool card_exists[NUM_RANKS][NUM_SUITS];
	char ch, rank_ch, suit_ch;
	int rank, suit;
	bool bad_card, duplicate;
	int cards_read = 0;

	while (cards_read < NUM_CARDS) {
		bad_card = false;
		duplicate = false;

		printf("Enter a card: ");

		rank_ch = getchar();
		switch (rank_ch) {
		case '0':            exit(EXIT_SUCCESS);
		case '2':            rank = 0; break;
		case '3':            rank = 1; break;
		case '4':            rank = 2; break;
		case '5':            rank = 3; break;
		case '6':            rank = 4; break;
		case '7':            rank = 5; break;
		case '8':            rank = 6; break;
		case '9':            rank = 7; break;
		case 't': case 'T':  rank = 8; break;
		case 'j': case 'J':  rank = 9; break;
		case 'q': case 'Q':  rank = 10; break;
		case 'k': case 'K':  rank = 11; break;
		case 'a': case 'A':  rank = 12; break;
		default:             bad_card = true;
		}

		suit_ch = getchar();
		switch (suit_ch) {
		case 'c': case 'C':  suit = 0; break;
		case 'd': case 'D':  suit = 1; break;
		case 'h': case 'H':  suit = 2; break;
		case 's': case 'S':  suit = 3; break;
		default:             bad_card = true;
		}

		while ((ch = getchar()) != '\n')
			if (ch != ' ') bad_card = true;

		if (bad_card)
			printf("Bad card; ignored.\n");

		for (int i = 0; i < NUM_CARDS; i++)
			if (hand[i][0] == rank && hand[i][1] == suit) {
				printf("Duplicate card; ignored.\n");
				duplicate = true;
				break;
			}

		if (!bad_card && !duplicate) {
			hand[cards_read][0] = rank;
			hand[cards_read][1] = suit;
			cards_read++;
		}
	}
}

/*
 * Determines whether the hand contains a straight, a flush,
 * four-of-a-kind, and/or three-of-a-kind; determines the
 * number of pairs; stores the results into the external
 * variables straight, flush, four, three, and pairs.
 */
void analyze_hand(int hand[NUM_CARDS][2])
{
	int num_consec = 0;
	int low = hand[0][0], high = hand[0][0];
	straight = true;
	flush = true;
	four = false;
	three = false;
	pairs = 0;

	void sort_hand(hand);

	/* check for flush */
	for (int i = 0; i < NUM_CARDS - 1; i++) {
		if (hand[i][1] != hand[i + 1][1]) {
			flush = false;
			break;
		}
	}

	/* check for straight */
	for (int i = 1; i < NUM_CARDS - 1; i++) {
		if (hand[i][0] == low - 1)
			low--;
		else if (hand[i][0] == high + 1)
			high++;
		else {
			straight = false;
			break;
		}
	}

	/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
	for (rank = 0; rank < NUM_RANKS; rank++) {
		if (num_in_rank[rank] == 4) four = true;
		if (num_in_rank[rank] == 3) three = true;
		if (num_in_rank[rank] == 2) pairs++;
	}
}

/*
 * Prints the classification of the hand, based on the values
 * of the external variables straight, flush, four, three, and
 * pairs.
 */
void print_result(void)
{
	if (straight && flush) printf("Straight flush");
	else if (four)         printf("Four of a kind");
	else if (three &&
		 pairs == 1)   printf("Full house");
	else if (flush)        printf("Flush");
	else if (straight)     printf("Straight");
	else if (three)        printf("Three of a kind");
	else if (pairs == 2)   printf("Two pairs");
	else if (pairs == 1)   printf("Pair");
	else                   printf("High card");

	printf("\n\n");
}
