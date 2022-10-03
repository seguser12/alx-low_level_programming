#include "main.h"

/**
 * _strdup - allocate space in memory containing a copy of parameter string
 * @str: pointer to string given as parameter
 *
 * Return: pointer to newly allocated memory
 */
char *_strdup(char *str)
{
	char *ptr;
	int len, count;

	if (!str)
		return (NULL);
	len = 0;
	while (str[len])
		len++;
	len++;
	ptr = malloc(sizeof(char) * len);
	if (!ptr)
		return (NULL);
	for (count = 0; str(count) != '\0'; count++)
		ptr(count) = str(count);
	return (ptr);
	free(ptr);
}
