#include <string.h>
#include <unistd.h>

int _putchar(char* c)
{
	return(write(1, c, strlen(c)));
}

int main(void)
{
	char* string;

	string = "this a piece of the job in detail. its yet to be done. the Lord is in control"; 
	_putchar(string);
	_putchar("\n");
	return(0);
}
