#include <stdio.h>

/*
 *prints all lowercase characters except q and e
 *
 *main - int initialised and takes no argument
 */

int main(void){

	char ch;
	/*initialises and increments chars*/
	for (ch='a'; ch <= z; ch++){
		/*check if char is an e or q and ignore it*/
		if (ch != 'e' || 'q'){
			/*output the desired char*/
			putchar(ch);
		}
	}
	return (0);
}
