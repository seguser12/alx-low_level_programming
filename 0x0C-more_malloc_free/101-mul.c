#include "main.h"

/**
 * is_digit - checks if a string is digit
 * @s: string
 *
 * Return: 0 if non-digit, 1 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - finds the length of a string
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * errors - handles errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @ac: no of args
 * @av: array of args
 *
 * Return: Always 0
 */
int main(int ac, char **av)
{
	char *s1, *s2;
	int len1, len2, len, i, digit1, digit2, carry, a;
	int *ptr;

	s1 = av[1];
	s2 = av[2];
	if (ac != 3 || !is_digit(s1) || is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2;

	ptr = malloc(sizeof(int) * (len + 1));
	if (!ptr)
		return (1);
	for (i = 0; i <= len; i++)
		ptr[i] = 0;
	len1 = len1 - 1;
	for (; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '\0';
		carry = 0;
		for (len2 = len2 - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += ptr[len] + (digit1 * digit2);
			ptr[len1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			ptr[len] += carry;
	}
	a = 0;
	for (i = 0; i < len; i++)
	{
		if (ptr[i])
			a = 1;
		if (a)
			_putchar(ptr[i] + '0');
	}
	if (!a)
		_putchar ('0');
	_putchar('\n');
	free(ptr);
	return (0);
}
