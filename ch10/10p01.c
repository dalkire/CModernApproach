/*
 * Ch10 Pr01 | C Programming, A Modern Approach
 *
 * Modify the stack example of Section 10.2 so that it stores characters
 * instead of integers. Next, add a main function that asks the user to enter
 * a series of parentheses and/or braces, then indicates whether or not they're
 * properly nested:
 * 
 * Enter parentheses and/or braces: ((){}{()})
 * Parentheses/braces are nested properly
 *
 * Hint: As the program reads characters, have it push each left parenthesis
 * or left brace. When it reads a right parenthesis or brace, have it pop the
 * stack and check that the item popped is the matching parenthesis or brace.
 * (If not, the parentheses/braces aren't nested properly.) When the program
 * reads the new-line character, have it check whether the stack is empty:
 * if so, the parentheses/braces are matched. If the stack isn't empty (or
 * if stack_underflow is ever called) the parentheses/braces aren't matched.
 * If stack_overflow is called, have the program print the message "Stack
 * overflow" and terminate immediately.
 */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char c);
char pop(void);
void failure(void);
void stack_underflow(void);
void stack_overflow(void);

int main(void)
{
	char c;

	printf("Enter parentheses and/or braces: ");
	while ((c = getchar()) != '\n') {
		if (c == '(' || c == '{') {
			push(c);
		} else if (c == ')') {
			if (pop() != '(')
				failure();
		} else if (c == '}') {
			if (pop() != '{')
				failure();
		}
	}

	if (is_empty())
		printf("Parentheses/braces are nested properly.\n");
	else
		failure();

	return 0;
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

void push(char i)
{
	if (is_full())
		stack_overflow();
	else
		contents[top++] = i;
}

char pop(void)
{
	if (is_empty())
		stack_underflow();
	else
		return contents[--top];
}

void failure(void)
{
	printf("Parentheses/braces are not matched.\n");
	exit(0);
}

void stack_underflow(void)
{
	failure();
}

void stack_overflow(void)
{
	printf("Stack overflow\n");
	exit(1);
}
