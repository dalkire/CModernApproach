/*
 * Ch04 Ex14 | C Programming, A Modern Approach
 *
 * Supply parentheses to show how a C compiler would interpret
 * each of the following expressions.
 * (a) a * b - c * d + e
 * (b) a / b % c / d
 * (c) - a - b + c - + d
 * (d) a * - b / c - d
 */
 #include <stdio.h>

int main(void)
{
	return 0;
}

/*
 * Referencing Table 4.2, which is a partial list of operators
 * with their precedence and associativity.
 * (a) a * b - c * d + e
 *     (a * b) - (c * d) + e
 *     ((a * b) - (c * d)) + e
 *     (((a * b) - (c * d)) + e)
 * (b) a / b % c / d
 *     (a / b) % c / d
 *     ((a / b) % c) / d
 *     (((a / b) % c) / d)
 * (c) - a - b + c - + d
 *     (- a) - b + c - (+ d)
 *     ((- a) - b) + c - (+ d)
 *     (((- a) - b) + c) - (+ d)
 *     ((((- a) - b) + c) - (+ d))
 * (d) a * - b / c - d
 *     a * (- b) / c - d
 *     (a * (- b)) / c - d
 *     ((a * (- b)) / c) - d
 *     (((a * (- b)) / c) - d)
 */
