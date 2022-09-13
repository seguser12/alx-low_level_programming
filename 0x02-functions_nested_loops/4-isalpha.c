#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 *
 * Return: 1 if alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	int alpha_base = 65;
	int alpha_top = 90;

	if (c >= alpha_base && c <= alpha_top)
		return (1);
	else
		return (0);
}
