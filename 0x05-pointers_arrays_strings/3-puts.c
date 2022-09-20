#include <unistd.h>
#include <string.h>


/**
 * _puts - prints to stdout
 * @str: input argument
 *
 * Return: more than 1 on success
 */


void _puts(char *str)
{
	write(1, str, strlen(str));
}
