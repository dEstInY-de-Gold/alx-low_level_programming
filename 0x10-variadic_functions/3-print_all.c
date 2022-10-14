#include "variadic_functions.h"

/**
 * print_i - prints integers
 * @array: named
 * @seperator: named
 */

void print_i(va_list array, char *seperator)
{
	printf("%s%d", array, va_arg(array, int));
}

/**
 * print_c - prints a character
 * @list: args
 * @seperator: acts as named
 */

void print_c(va_list list, char *sep)
{
	printf("%s%c", sep, va_arg(list, int));
}

/**
 * print_s - prints string
 * @sep: seperator
 * @list: list to print
 * Return: none
 */

void print_s(va_list list, char *sep)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(nil)";
	printf("%s%s", sep, s);
}
/**
 * print_f - prints floats
 * @sep: float to print
 * @list: next arguement of list to print
 * Return: none
 */

void print_f(va_list list, char *sep)
{
	printf("%s%f", sep, va_arg(list, double));
}

/**
 * print_all - prints all data types to stdout
 * @format:  list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list list;
	int i, j;
	char *separator;

	type_t ops[] = {
	{"c", print_c},
	{"i", print_i},
	{"f", print_f},
	{"s", print_s},
	i = 0;
	separator = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(ops[j]).op)
			{
				ops[j].f(list, separator);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
