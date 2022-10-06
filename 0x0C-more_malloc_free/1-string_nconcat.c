#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: no of bytes to concatenate
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int count, count2, len, i, j;
	char *ptr;

	count = 0;
	while (s1[count])
		count++;

	count2 = 0;
	while (s2[count2])
		count2++;

	len = count + count2;

	if (n < count2)
		ptr = malloc(sizeof(char) * (count + n + 1));
	esle
		ptr = malloc(sizeof(char) * (len + 1);
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < count; i++)
		ptr[i] = s1[i];

	j = 0;
	while (count2 < n && i < len)
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	return (ptr);
}
