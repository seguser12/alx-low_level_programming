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
	unsigned int count, count2, len, i, j;
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
	else
		ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < count; i++)
		ptr[i] = s1[i];

	j = 0;
	while (n < count2 && i < (count + n))
		ptr[i++] = s2[j++];
	while (n >= count2 && i < len)
		ptr[i++] = s2[j++];

	ptr[i] = '\0';
	return (ptr);
}
