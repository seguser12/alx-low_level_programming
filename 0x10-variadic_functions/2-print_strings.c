#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between stirngs
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *str_arg;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str_arg = va_arg(ap, char *);
		if (!separator)
			printf("%s", str_arg);
		else if (!str_arg)
			printf("(nil)");
		else if (separator && i == n - 1)
			printf("%s", str_arg);
		else
			printf("%s%s", str_arg, separator);
	}
	va_end(ap);
	printf("\n");
}
