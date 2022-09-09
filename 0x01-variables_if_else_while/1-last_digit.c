#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assign a random number to variable n
 *
 * Return: always 0
 */
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %d is ", n);

	if (last_digit > 5)
		printf("%d and is greater than 5\n", last_digit);
	else if (last_digit  == 0)
		printf("%d and is 0\n", last_digit);
	else if (last_digit < 6 && last_digit != 0)
		printf("%d and is less than 6 and not 0\n", last_digit);
	return (0);
}
