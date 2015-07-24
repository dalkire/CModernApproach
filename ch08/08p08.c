/*
 * Ch08 Pr08 | C Programming, A Modern Approach
 *
 * Modify Programming Project 7 so that it prompts for five quiz grades for
 * each of five students, then computes the total score and average score
 * for each student, and the average score, high score, and low score for
 * each quiz.
 */
#include <stdio.h>

#define NUM_STUDENTS 5
#define NUM_QUIZZES 5

int main(void)
{
	int a[NUM_STUDENTS][NUM_QUIZZES];
	int row_totals[NUM_STUDENTS] = {0};
	int col_totals[NUM_QUIZZES] = {0};
	int low_score[NUM_QUIZZES];
	int high_score[NUM_QUIZZES];

	/* Initialize low_score and high_score arrays */
	for (int i = 0; i < NUM_QUIZZES; i++) {
		low_score[i] = 999;
		high_score[i] = -999;
	}

	for (int i = 0; i < NUM_STUDENTS; i++) {
		printf("Enter quizzes for student %d: ", i + 1);
		scanf("%d%d%d%d%d", &a[i][0], &a[i][1], &a[i][2], &a[i][3], &a[i][4]);
	}

	
	for (int i = 0; i < NUM_STUDENTS; i++) {
		for (int j = 0; j < NUM_QUIZZES; j++) {
			row_totals[i] += a[i][j];
			col_totals[j] += a[i][j];

			if (a[i][j] < low_score[j]) {
				low_score[j] = a[i][j];
			}

			if (a[i][j] > high_score[j]) {
				high_score[j] = a[i][j];
			}
		}
	}

	for (int i = 0; i < NUM_STUDENTS; i++) {
		printf("\nStudent %d: ", i + 1);
		printf("Total = %d, Avg = %.1f",
		       row_totals[i],
		       (float) row_totals[i] / NUM_QUIZZES);
	}
	printf("\n")

	for (int i = 0; i < NUM_QUIZZES; i++) {
		printf("\nQuiz %d: ", i + 1);
		printf("Avg = %.1f, Low = %d, High = %d",
		       (float) col_totals[i] / NUM_STUDENTS,
		       low_score[i], high_score[i]);
	}
	printf("\n");

	return 0;
}
