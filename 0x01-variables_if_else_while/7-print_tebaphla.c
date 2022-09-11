#include <stdio.h>

/*
 *outputs lowercase chars in reverse form
 *
 * main - initialised to int with no arguments
 */

int main(void){
	/*defines the char variable*/
	char ch;
	/*initialise chars and start ouput reversively*/
	for (ch='z'; ch>='a'; ch--){
	
		putchar(ch);
	}
	return (0);
}
