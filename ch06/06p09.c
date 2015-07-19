/*
 * Ch06 Pr09 | C Programming, A Modern Approach
 *
 * Programming Project 8 in Chapter 2 asked you to write a program that
 * calculates the remaining balance on a loan after the first, second, and
 * third monthly payments. Modify the program so that it also asks the user
 * to enter the number of payments and then displays the balance remaining
 * after each of these payments.
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
