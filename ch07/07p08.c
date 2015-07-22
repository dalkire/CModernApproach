/*
 * Ch07 Pr08 | C Programming, A Modern Approach
 *
 * Modify Programming Project 8 from Chapter 5 so that the user enters a time
 * using the 12-hour clock. The input will have the form hours:minutes
 * followed by either A, P, AM, or PM (either lower-case or upper-case).
 * White space is allowed (but not required) between the numerical time and
 * the AM/PM indicator. Examples of valid input:
 * 1:15P
 * 1:15PM
 * 1:15p
 * 1:15pm
 * 1:15 P
 * 1:15 PM
 * 1:15 p
 * 1:15 pm
 *
 * You may assume that the input has one of these forms; there is no need to
 * test for errors.
 */
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	int h, m, t, closest_departure, closest_arrival, min_delta;
	int dep_h, dep_m, arr_h, arr_m;
	char suff;
	char *dep_suffix, *arr_suffix;
	int d1 =  8 * 60 +  0, a1 = 10 * 60 + 16;
	int d2 =  9 * 60 + 43, a2 = 11 * 60 + 52;
	int d3 = 11 * 60 + 19, a3 = 13 * 60 + 31;
	int d4 = 12 * 60 + 47, a4 = 15 * 60 +  0;
	int d5 = 14 * 60 +  0, a5 = 16 * 60 +  8;
	int d6 = 15 * 60 + 45, a6 = 17 * 60 + 55;
	int d7 = 19 * 60 +  0, a7 = 21 * 60 + 20;
	int d8 = 21 * 60 + 45, a8 = 23 * 60 + 58;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &h, &m, &suff);

	if (toupper(suff) == 'P') {
		h += 12;
	}

	t = h * 60 + m;
	closest_departure = d1;
	closest_arrival = a1;
	
	if (t > d1) {
		min_delta = t - d1;
	} else {
		min_delta = d1 - t;
	}

	if (t > d2) {
		if (t - d2 < min_delta) {
			min_delta = t - d2;
			closest_departure = d2;
			closest_arrival = a2;
		}
	} else if (d2 - t < min_delta) {
		min_delta = d2 - t;
		closest_departure = d2;
		closest_arrival = a2;
	}
	
	if (t > d3) {
		if (t - d3 < min_delta) {
			min_delta = t - d3;
			closest_departure = d3;
			closest_arrival = a3;
		}
	} else if (d3 - t < min_delta) {
		min_delta = d3 - t;
		closest_departure = d3;
		closest_arrival = a3;
	}
	
	if (t > d4) {
		if (t - d4 < min_delta) {
			min_delta = t - d4;
			closest_departure = d4;
			closest_arrival = a4;
		}
	} else if (d4 - t < min_delta) {
		min_delta = d4 - t;
		closest_departure = d4;
		closest_arrival = a4;
	}
	
	if (t > d5) {
		if (t - d5 < min_delta) {
			min_delta = t - d5;
			closest_departure = d5;
			closest_arrival = a5;
		}
	} else if (d5 - t < min_delta) {
		min_delta = d5 - t;
		closest_departure = d5;
		closest_arrival = a5;
	}
	
	if (t > d6) {
		if (t - d6 < min_delta) {
			min_delta = t - d6;
			closest_departure = d6;
			closest_arrival = a6;
		}
	} else if (d6 - t < min_delta) {
		min_delta = d6 - t;
		closest_departure = d6;
		closest_arrival = a6;
	}
	
	if (t > d7) {
		if (t - d7 < min_delta) {
			min_delta = t - d7;
			closest_departure = d7;
			closest_arrival = a7;
		}
	} else if (d7 - t < min_delta) {
		min_delta = d7 - t;
		closest_departure = d7;
		closest_arrival = a7;
	}
	
	if (t > d8) {
		if (t - d8 < min_delta) {
			min_delta = t - d8;
			closest_departure = d8;
			closest_arrival = a8;
		}
	} else if (d8 - t < min_delta) {
		min_delta = d8 - t;
		closest_departure = d8;
		closest_arrival = a8;
	}

	dep_h = closest_departure / 60 % 12;
	dep_h = dep_h == 0 ? 12 : dep_h;
	dep_m = closest_departure % 60;
	dep_suffix = closest_departure / 60 < 12 ? "a.m." : "p.m.";

	arr_h = closest_arrival / 60 % 12;
	arr_h = arr_h == 0 ? 12 : arr_h;
	arr_m = closest_arrival % 60;
	arr_suffix = closest_arrival / 60 < 12 ? "a.m." : "p.m.";
	
	printf("Closest departure time is %d:%.2d %s, arriving at %d:%.2d %s\n",
	       dep_h, dep_m, dep_suffix,
	       arr_h, arr_m, arr_suffix);

	return 0;
}
