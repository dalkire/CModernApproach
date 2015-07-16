/*
 * Ch02 Pr03 | C Programming, A Modern Approach
 *
 * Modify the program of Programming Project 2 so that it prompts
 * the user to enter the radius of the sphere.
 */
#include <stdio.h>

int main(void)
{
	float pi = 3.14159f;
	int r;

	printf("Radius of the sphere: ");
	scanf("%d", &r);
	printf("Volume: %.2f\n", 4.0f/3.0f * pi * r*r*r);

	return 0;
}
