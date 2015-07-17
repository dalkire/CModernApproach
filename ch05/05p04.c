/*
 * Ch05 Pr03 | C Programming, A Modern Approach
 *
 * Here's a simplified version of the Beaufort scale, which is used to
 * estimate wind force:
 * Speed (knots)    Description
 * Less than 1      Calm
 * 1-3              Light air
 * 4-27             Breeze
 * 28-47            Gale
 * 48-63            Storm
 * Above 63         Hurricane
 *
 * Write a program that asks the user to enter a wind speed (in knots).
 * Then display the corresponding description.
 */
#include <stdio.h>

int main(void)
{
	int wind_speed;

	printf("Enter a wind speed (in knots): ");
	scanf("%d", &wind_speed);

	if (wind_speed < 1) {
		printf("Calm\n");
	} else if (1 <= wind_speed && wind_speed <= 3) {
		printf("Light air\n");
	} else if (4 <= wind_speed && wind_speed <= 27) {
		printf("Breeze\n");
	} else if (28 <= wind_speed && wind_speed <= 47) {
		printf("Gale\n");
	} else if (48 <= wind_speed && wind_speed <= 63) {
		printf("Storm\n");
	} else {
		printf("Hurricane\n");
	}

	return 0;
}
