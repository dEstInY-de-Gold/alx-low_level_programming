#include <stdio.h>
#include <string.h>

/*
 *Puts - to display a string on the screen
 *
 *this should end with a newline syntax
 */

int main(void)
{
	char string[55];
	strcpy(string, "Programming is like building a multilingual puzzle\n");
	puts(string);
	return 0;
}
