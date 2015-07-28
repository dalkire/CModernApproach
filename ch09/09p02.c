/*
 * Ch09 Pr02 | C Programming, A Modern Approach
 *
 * Modify Programming Project 5 from Chapter 5 so that it uses a function to
 * compute the amount of income tax. When passed an amount of taxable income,
 * the function will return the tax due.
 *
 * Ch05 Pr05 Reminder:
 * In one state, single residents are subject to the following income
 * tax:
 * Income            Amount of tax
 * Not over $750     1% of income
 * $750-$2,250       $7.50   plus 2% of amount over $750
 * $2,250-$3,750     $37.50  plus 3% of amount over $2,250
 * $3,750-$5,250     $82.50  plus 4% of amount over $3,750
 * $5,250-$7,000     $142.50 plus 5% of amount over $5,250
 * Over $7,000       $230.00 plus 6% of amount over $7,000
 */
#include <stdio.h>

#define N 10

float income_tax(float income);

int main(void)
{
	float income;

	printf("Enter taxable income: ");
	scanf("%f", &income);
	printf("Tax due: $%.2f\n", income_tax(income));

	return 0;
}

float income_tax(float income)
{
	float tax;

	if (income < 750.00f) {
		tax = .01f * income;
	} else if (income < 2250.00f) {
		tax = 7.50f + .02f * (income - 750.00f);
	} else if (income < 3750.00f) {
		tax = 37.50f + .03f * (income - 2250.00f);
	} else if (income < 5250.00f) {
		tax = 82.50f + .04f * (income - 3750.00f);
	} else if (income < 7000.00f) {
		tax = 142.50f + .05f * (income - 5250.00f);
	} else {
		tax = 230.00f + .06f * (income - 7000.00f);
	}

	return tax;
}
