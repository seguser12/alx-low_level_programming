#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i, int_args;
	char *str,  *separator = "";
	char char_args;
	double float_args;
	va_list ap;

	va_start(ap, format);

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				char_args = va_arg(ap, int);
				printf("%s%c", separator, char_args);
				break;
			case 'i':
				int_args = va_arg(ap, int);
				printf("%s%d", separator, int_args);
				break;
			case 'f':
				float_args = va_arg(ap, double);
				printf("%s%f", separator, float_args);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(ap);
}
