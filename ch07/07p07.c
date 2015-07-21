/*
 * Ch07 Pr07 | C Programming, A Modern Approach
 *
 * Modify Programming Project 6 from Chapter 3 so that the user may add,
 * subtract, multiply, or divide two fractions (by entering either +, -, *,
 * or / between the fractions).
 */
#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	int n, m, r, gcd;
	char op;
	printf("Enter two fractions separated by a mathematical operator: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);

	switch (op) {
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '-':
			num1 = num1 * denom2;
			num2 = num2 * denom1;
			denom1 = denom2 = denom1 * denom2;
			result_num = num1 - num2;
			result_denom = denom1 - denom2;
			break;
		case '*':
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			break;
		case '/':
			result_num = num1 * denom2;
			result_denom = denom1 * num2;
			break;
		default:
			printf("Error: Invalid input.\n");
			return 1;
	}

	n = result_num;
	m = result_denom;
	while (n != 0) {
		r = m % n;
		m = n;
		n = r;
		gcd = m;
	}

	printf("The result in lowest terms is: %d/%d\n",
	       result_num / gcd, result_denom / gcd);

	return 0;
}
