#include <stdio.h>
#include <string.h>

/*
 *printf - to display a specified text to the output screen
 *
 * the text is hard coded
 * It does not come from the user
 */

int main(void)
{
	char s[ ] ="with proper grammar, but the outcome is a piece of art";
	printf("%s\n"s);
	return 0;
}
