/*
 * Ch10 Pr06 | C Programming, A Modern Approach
 *
 * Some calculators (notably those from Hewlett-Packard) use a system of
 * writing mathematical expressions known as Reverse Polish Notation (RPN).
 * In this notation, operators are placed after their operands instead of
 * between their operands. For example, 1 + 2 would be written 1 2 + in RPN,
 * and 1 + 2 * 3 would be written 1 2 3 * +. RPN expressions can easily be
 * evaluated using a stack. The algorithm involves reading the operators
 * and operands in an expression from left to right, performing the following
 * actions:
 * -- When an operand is encountered, push it onto the stack.
 * -- When an operator is encountered, pop its operands from the stack,
 *    perform the operation on those operands, and then push the result onto
 *    the stack.
 *
 * Write a program that evaluates RPN expressions. The operands will be
 * single-digit integers. The operators are +, -, *, /, and =. The =
 * operator causes the top stack item to be displayed; afterwards the stack
 * is cleared and the user is prompted to enter another expression. The
 * process continues until the user enters a character that is not an
 * operator or operand:
 *
 * Enter an RPN expression 1 2 3 * + =
 * Value of expression: 7
 * Enter an RPN expression: 5 8 * 4 9 - / =
 * Value of expression: -8
 * Enter an RPN expression: q
 *
 * It the stack overflows, the program will display the message "Expression
 * is too complex" and terminate. If the stack underflows (because of an
 * expression such as 1 2 + +), the program will display the error message
 * "Not enough operands in expression" and terminate. Hints: Incorporate the
 * stack code from Section 10.2 into your program. Use scanf(" %c", &ch) to
 * read the operators and operands.
 */
#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 20

int top = 0;

void push(double x, double stack[STACK_SIZE]);
double pop(double stack[STACK_SIZE]);
void stack_overflow(void);
void stack_underflow(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);

int main(void)
{


	char ch;
	double stack[STACK_SIZE];

	printf("Enter an RPN expresson: ");
	scanf(" %c", &ch);

	while (ch != '\n') {
		if (isdigit(ch)) {
			push(digittoint(ch), stack);
		} else if (ch == '+') {
			double b = pop(stack);
			double a = pop(stack);
			push(a + b, stack);
		} else if (ch == '-') {
			double b = pop(stack);
			double a = pop(stack);
			push(a - b, stack);
		} else if (ch == '*') {
			double b = pop(stack);
			double a = pop(stack);
			push(a * b, stack);
		} else if (ch == '/') {
			double b = pop(stack);
			double a = pop(stack);
			push(a / b, stack);
		} else if (ch == '=') {
			printf("Value of expression: %g\n", pop(stack));
			make_empty();
			printf("Enter an RPN expression: ");
		}

		scanf(" %c", &ch);
	}

	return 0;
}

void push(double x, double stack[STACK_SIZE])
{
	if (is_full())
		stack_overflow();
	else
		stack[top++] = x;
}

double pop(double stack[STACK_SIZE])
{
	if (is_empty())
		stack_underflow();
	else
		return stack[--top];
}

void stack_overflow(void)
{
	printf("Expression is too complex\n");
	exit(1);
}

void stack_underflow(void)
{
	printf("Not enough operands in expression\n");
	exit(1);
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}
