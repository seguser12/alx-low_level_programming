#include "main.h"

/**
 * main - prints sum of all multiple of 3 and 5 below 1024
 *
 * Return: always 0
 */
int main(void)
{
	int sum_of_3, sum_of_5, total_sum, count;

	for (count = 0; count < 1024; count++)
	{
		if (count % 3 == 0)
			sum_of_3 += count;
		
		else if (count % 5 == 0)
			sum_of_5 += count;
	}
	total_sum = sum_of_3 + sum_of_5;
	printf("%d\n", total_sum);

	return (0);
}
