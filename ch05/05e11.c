/*
 * Ch05 Ex11 | C Programming, A Modern Approach
 *
 * The following table shows telephone area codes in the state of Georgia
 * along with the largest city in each area:
 * Area code    Major city
 *   229        Albany
 *   404        Atlanta
 *   470        Atlanta
 *   478        Macon
 *   678        Atlanta
 *   706        Columbus
 *   762        Columbus
 *   770        Atlanta
 *   912        Savannah
 *
 *   Write a switch statement whose controlling expression is the variable
 *   area_code. If the value of area_code is in the table, the switch
 *   statement will print the corresponding city name. Otherwise, the
 *   switch statement will display the message "Area code not recognized".
 *   Use the techniques discussed in Section 5.3 to make the switch
 *   statement as simple as possible.
 */
#include <stdio.h>

int main(void)
{
	int area_code;

	printf("Enter area code: ");
	scanf("%d", &area_code);

	switch (area_code) {
	        case 229:
			printf("Albany\n");
			break;
	        case 404:
	        case 470:
	        case 678:
	        case 770:
			printf("Atlanta\n");
			break;
	        case 706:
	        case 762:
			printf("Columbus\n");
			break;
	        case 478:
			printf("Macon\n");
			break;
	        case 912:
			printf("Savannah\n");
			break;
		default:
			printf("Area code not recognized\n");
	}

	return 0;
}
