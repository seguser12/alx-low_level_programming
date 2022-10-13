#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list ap;
	int num_arg;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		num_arg = va_arg(ap, int);
		if (!separator)
			printf("%d", num_arg);
		else if (separator && i == n - 1)
			printf("%d", num_arg);
		else
			printf("%d%s", num_arg, separator);
	}

	va_end(ap);
	printf("\n");
}
