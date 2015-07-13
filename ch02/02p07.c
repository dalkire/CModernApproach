/*
 * Ch02 Pr07 | C Programming, A Modern Approach
 *
 * Write a program that asks the user to enter a U.S. dollar amount
 * and then shows how to pay that amount using the smallest number
 * of $20, $10, $5, and $1 bills:
 * Enter a dollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 *  $5 bills: 0
 *  $1 bills: 3
 */
 #include <stdio.h>

int main(void)
{
	int amt;

	printf("Enter a dollar amount: ");
	scanf("%d", &amt);

	printf("$20 bills: %d\n", amt/20);
	amt = amt - (amt/20)*20;
	printf("$10 bills: %d\n", amt/10);
	amt = amt - (amt/10)*10;
	printf(" $5 bills: %d\n", amt/5);
	amt = amt - (amt/5)*5;
	printf(" $1 bills: %d\n", amt);

	return 0;
}

/*
 * Takes advantage of remainder truncation of integer division.
 */
