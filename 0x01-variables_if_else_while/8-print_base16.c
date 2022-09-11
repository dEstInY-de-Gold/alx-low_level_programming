#include <stdio.h>

/*
 *prints numbers of base16 in lowercase
 *
 * main - integer typed initialised to value null
 */

int main(void){

	int num;
	char ch;

	for (num=0; num<=9; num++){
	
		putchar("%d", num);
	}
	for (ch='a'; ch<='f'; ch++){
	
		putchar(ch);
	}
	putchar("\n");
	return (0);
}
