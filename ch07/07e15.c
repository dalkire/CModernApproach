/*
 * Ch07 Ex15 | C Programming, A Modern Approach
 *
 * Use typedef to create types named Int8, Int16, and Int32. Define the types
 * so that they represent 8-bit, 16-bit, and 32-bit integers on your machine.
 */
#include <stdio.h>

int main(void)
{
	typedef char Int8;
	typedef short Int16;
	typedef int Int32;

	printf("sizeof(Int8): %lu\n", sizeof(Int8));
	printf("sizeof(Int16): %lu\n", sizeof(Int16));
	printf("sizeof(Int32): %lu\n", sizeof(Int32));

	return 0;
}
