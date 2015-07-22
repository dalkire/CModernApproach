/*
 * Ch07 Pr12 | C Programming, A Modern Approach
 *
 * Write a program that evaluates an expression:
 * Enter an expression: 1+2.5*3
 * Value of expression: 10.5
 *
 * The operands in the expression are floating-point numbers; the operator are
 * +, -, *, and /. The expression is evaluated from left to right (no operator
 * takes precedence over any other operator).
 */
#include <stdio.h>

int main(void)
{
	char operator;
	float operand, result;

	printf("Enter an expression: ");
	scanf("%f", &result);

	while ((operator = getchar()) != '\n') {
		scanf("%f", &operand);

		switch (operator) {
			case '+':
				result += operand;
				break;
			case '-':
				result -= operand;
				break;
			case '*':
				result *= operand;
				break;
			case '/':
				result /= operand;
				break;
		}
	}

	printf("Value of expression: %f\n", result);

	return 0;
}
