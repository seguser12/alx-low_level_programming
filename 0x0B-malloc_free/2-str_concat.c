#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, size, count, count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1])
		len1++;

	len2 = 0;
	while (s2[len2])
		len2++;
	size = len1 + len2 + 1;
	ptr = malloc(sizeof(char) * size);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (count = 0; count < len1; count++)
		ptr[count] = s1[count];
	for (count2 = 0; count2 <= size; count2++)
	{
		ptr[count] = s2[count2];
		count++;
	}
	return (ptr);
}

