/*
 * Ch08 Pr10 | C Programming, A Modern Approach
 *
 * Modify Programming Project 8 from Chapter 5 so that the departure times
 * are stored in an array and the arrival times are stored in a second array.
 * (The times are integers, representing the number of minutes since midnight.)
 * The program will use a loop to search the array of departure times for the
 * one closest to the time entered by the user.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N_DEPARTURES 8
#define N_ARRIVALS 8

int main(void)
{
	int h, m, t, closest_departure, closest_arrival, min_delta;
	int dep_h, dep_m, arr_h, arr_m;
	char dep_suffix[] = "a.m.", arr_suffix[] = "a.m.";
	int departures[8] = { 8 * 60 + 0, 9 * 60 + 43, 11 * 60 + 19,
			      12 * 60 + 47, 14 * 60 + 0, 15 * 60 + 45,
			      19 * 60 + 0, 21 * 60 + 45 };
	int arrivals[8] = { 10 * 60 + 16, 11 * 60 + 52, 13 * 60 + 31,
			    15 * 60 + 0, 16 * 60 + 8, 17 * 60 + 55,
			    21 * 60 + 20, 23 * 60 + 58 };

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &h, &m);
	t = h * 60 + m;
	closest_departure = departures[0];
	closest_arrival = arrivals[0];
	min_delta = abs(t - departures[0]);

	for (int i = 0; i < N_DEPARTURES; i++) {
		if (abs(t - departures[i]) < min_delta) {
			closest_departure = departures[i];
			closest_arrival = arrivals[i];
			min_delta = abs(t - departures[i]);
		}
	}

	dep_h = closest_departure / 60 % 12;
	dep_h = dep_h == 0 ? 12 : dep_h;
	dep_m = closest_departure % 60;

	if (closest_departure / 60 >= 12) {
		strcpy(dep_suffix, "p.m.");
	}

	arr_h = closest_arrival / 60 % 12;
	arr_h = arr_h == 0 ? 12 : arr_h;
	arr_m = closest_arrival % 60;
	
	if (closest_arrival / 60 >= 12) {
		strcpy(arr_suffix, "p.m.");
	}

	printf("Closest departure time is %d:%.2d %s, arriving at %d:%.2d %s\n",
	       dep_h, dep_m, dep_suffix,
	       arr_h, arr_m, arr_suffix);

	return 0;
}
