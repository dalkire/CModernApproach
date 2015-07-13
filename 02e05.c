/*
 * Ch02 Ex05 | C Programming, A Modern Approach
 *
 * Which of the following are not legal C identifiers?
 * (a) 100_bottles
 * (b) _100_bottles
 * (c) one__hundred__bottles
 * (d) bottles_by_the_hundred_
 */
int main(void)
{
	int 100_bottles = 100;
	int _100_bottles = 100;
	int one__hundred__bottles = 100;
	int bottles_by_the_hundred_ = 100;

	return 0;
}

/*
 * The only one for which the compiler gives an error is (a).
 */
