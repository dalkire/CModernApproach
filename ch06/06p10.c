/*
 * Ch06 Pr10 | C Programming, A Modern Approach
 *
 * Programming Project 9 in Chapter 5 asked you to write a program that
 * determines which of two dates comes earlier on the calendar. Generalize
 * the program so that the user may enter any number of dates. The user
 * will enter 0/0/0 to indicate that no more dates will be entered:
 * Enter a date (mm/dd/yy): 3/6/08
 * Enter a date (mm/dd/yy): 5/17/07
 * Enter a date (mm/dd/yy): 6/3/07
 * Enter a date (mm/dd/yy): 0/0/0
 * 5/17/07 is the earliest date
 */
#include <stdio.h>

int main(void)
{
	float balance, interest, payment;
	int num_payments;

	printf("Enter amount of loan: ");
	scanf("%f", &balance);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	printf("Enter number of payments: ");
	scanf("%d", &num_payments);

	float monthly_interest = (interest/100)/12;

	for (int i = 1; i <= num_payments; i++) {
		balance = balance + balance * monthly_interest - payment;
		printf("Balance remaining after payment %2d: $%.2f\n",
		       i, balance);
	}

	return 0;
}
