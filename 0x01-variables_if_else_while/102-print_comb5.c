#include <stdio.h>

/**
 * main - prints all possible combinations of two digit numbers
 *
 * Return: always 0
 */
int main(void)
{
	int num1, num2;

	num1 = 0;

	while (num1 <= 99)
	{
		for (num2 = 0; num2 <= 99; num2++)
		{
			if (num2 > num1)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
				if (num1 != 98 || num2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		num1++;
	}
	putchar('\n');
	return (0);
}

