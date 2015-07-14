/*
 * Ch03 Pr02 | C Programming, A Modern Approach
 *
 * Write a program that formats product information entered by
 * the user. A session with the program should look like this:
 * Enter item number: 583
 * Enter unit price: 13.5
 * Enter purchase date (mm/dd/yyyy): 10/24/2010
 * Item       Unit        Purchase
 *            Price       Date
 * 583        $ 13.50     10/24/2010
 *
 * The item number and date should be left justified; the unit
 * price should be right justified. Allow dollar amounts up to
 * $9999.99. Hint: Use tabs to line up the columns.
 */
#include <stdio.h>

int main(void)
{
	int item, m, d, y;
	float price;

	printf("Enter item number: ");
	scanf("%d", &item);

	printf("Enter unit price: ");
	scanf("%f", &price);

	printf("Enter purchase date (mm/dd/yyy): ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("\nItem\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%8.2f\t%d/%d/%d\n", item, price, m, d, y);

	return 0;
}
