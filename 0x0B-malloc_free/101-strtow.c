#include "main.h"

/**
 * count_word - counts the no of words in a string
 * @str: string to eval
 *
 * Return: no of words
 */
int count_word(char *str)
{
	int count, i, j;

	count = 0;
	i = 0;

	for (j = 0; str[j] != '\0'; j++)
	{
		if (str[j] == ' ')
			i = 0;
		else if (i == 0)
		{
			i = 1;
			count++;
		}
	}
	return (count);
}

/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of string
 * or NULL if failure
 */
char **strtow(char *str)
{
	char **result, *tmp;
	int i, j, k, len, words, start, end;

	len = 0;
	j = 0;
	k = 0;

	while (str[len])
		len++;
	words = count_word(str);

	if (words == 0)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (words + 1));

	if (result == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (j + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				result[k] = tmp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			start = i;
	}
	result[k] = NULL;
	return (result);
}
