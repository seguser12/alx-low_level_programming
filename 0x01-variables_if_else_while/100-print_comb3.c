#include <stdio.h>

/**
 * main - prints all possible different comb of two digits
 *
 * Return: always 0
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 < 57; num1++)
	{
		for (num2 = 49; num2 < 58; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 != 56 || num2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
