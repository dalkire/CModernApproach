/*
 * Ch09 Ex11 | C Programming, A Modern Approach
 *
 * Write the following function:
 * float compute_GPA(char grades[], int n);
 *
 * The grades array will contain letter grades (A, B, C, D, or F, either
 * upper-case or lower-case); n is the length of the array. The function
 * should return the average of the grades (assume that A = 4, B = 3, C = 2,
 * D = 1, and F = 0).
 */
#include <ctype.h>
#include <stdio.h>

#define LEN 10

float compute_GPA(char grades[], int n);

int main(void)
{
	char grades[LEN] = {'A', 'A', 'C', 'D', 'B', 'A', 'B', 'f', 'b', 'c'};

	printf("List of grades:");
	for (int i = 0; i < LEN; i++) {
		printf(" %c", grades[i]);
	}

	printf("\nGPA = %.1f\n", compute_GPA(grades, LEN));
	
	return 0;
}

float compute_GPA(char grades[], int n)
{
	int sum = 0;

	for (int i = 0; i < n; i++) {
		switch (toupper(grades[i])) {
		case 'A':
			sum += 4;
			break;
		case 'B':
			sum += 3;
			break;
		case 'C':
			sum += 2;
			break;
		case 'D':
			sum += 1;
			break;
		default:
			break;
		}
	}

	return (float) sum / n;
}
