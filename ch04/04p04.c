/*
 * Ch04 Pr04 | C Programming, A Modern Approach
 *
 * Write a program that reads an integer entered by the user and
 * displays it in octal (base 8):
 * Enter a number between 0 and 32767: 1953
 * In octal, your number is: 03641
 *
 * The output should be displayed using five digits, even if fewer
 * digits are sufficient. Hint: To convert the number to octal, first
 * divide the number by 8; the remainder is the last digit of the
 * octal number (1, in this case). Then divide the original number
 * by 8 and repeat the process to arrive that the next-to-last digit.
 * (printf is capable of displaying numbers in base 8, as we'll see in
 * Chapter 7, so there's actually an easier way to write this program.)
 */
 #include <stdio.h>

int main(void)
{
	int decimal;
	int octal = 0;
	int magnitude = 10;

	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &decimal);

	octal += decimal % 8;
	while (decimal /= 8) {
		octal += (decimal % 8) * magnitude;
		magnitude *= 10;
	}

	printf("%05d\n", octal);

	return 0;
}
